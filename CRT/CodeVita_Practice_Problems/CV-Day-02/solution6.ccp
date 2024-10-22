#include <iostream>
#include <sstream>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>

using namespace std;

map<pair<char, string>, int> expenses;
map<pair<char, char>, int> loans;
map<char, int> balances;

void processTransaction(string transaction) {
    stringstream ss(transaction);
    string type;
    ss >> type;

    if (type == "L") {
        char borrower, lender;
        int amount;
        ss >> borrower >> lender >> type >> amount;
        loans[{borrower, lender}] += amount;
    } else {
        char paidBy;
        int amount;
        char temp;
        ss >> paidBy >> temp >> amount;

        balances[paidBy] -= amount;
        int sharedAmong = 0;
        while (ss >> temp) {
            char person;
            ss >> person;
            balances[person] += amount / 3;
            sharedAmong++;
        }
        balances[paidBy] += amount - (amount / 3 * sharedAmong);
    }
}

void calculateAndProcessInterest(int currentDay) {
    for (auto &loan : loans) {
        char borrower = loan.first.first;
        char lender = loan.first.second;
        int amount = loan.second;

        int weeks = (currentDay - 1) / 7;
        double interest = amount * pow(1.01, weeks) - amount;
        expenses[{lender, "I" + borrower}] += static_cast<int>(round(interest));
    }
}

void reconcileBalances() {
    for (const auto &expense : expenses) {
        char borrower = expense.first.second[1];
        char lender = expense.first.first;
        int amount = expense.second;

        if (amount <= loans[{borrower, lender}]) {
            loans[{borrower, lender}] -= amount;
        } else {
            amount -= loans[{borrower, lender}];
            loans[{borrower, lender}] = 0;

            balances[borrower] += amount;
            balances[lender] -= amount;
        }
    }

    vector<pair<char, int>> creditors, debtors;

    for (const auto &balance : balances) {
        if (balance.second > 0) {
            creditors.push_back({balance.first, balance.second});
        } else if (balance.second < 0) {
            debtors.push_back({balance.first, -balance.second});
        }
    }

    sort(creditors.begin(), creditors.end());
    sort(debtors.begin(), debtors.end());

    auto creditor = creditors.begin();
    auto debtor = debtors.begin();

    while (creditor != creditors.end() && debtor != debtors.end()) {
        int settleAmount = min(creditor->second, debtor->second);
        cout << debtor->first << "/" << creditor->first << "/" << settleAmount << endl;
        creditor->second -= settleAmount;
        debtor->second -= settleAmount;
        if (creditor->second == 0) ++creditor;
        if (debtor->second == 0) ++debtor;
    }

    if (creditor == creditors.end() && debtor == debtors.end()) {
        cout << "NO DUES" << endl;
    }
}

int main() {
    int N;
    cin >> N;
    cin.ignore();

    for (int i = 0; i < N; ++i) {
        string transaction;
        getline(cin, transaction);
        processTransaction(transaction);
        calculateAndProcessInterest(i + 1);
    }

    reconcileBalances();

    return 0;
}