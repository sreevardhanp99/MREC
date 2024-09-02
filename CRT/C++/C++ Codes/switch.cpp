#include<iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	cout << "Enter a string : ";
	cin >>s;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=="a" || s[i]=="e" || s[i]=="i" || s[i]=="o" || s[i]=="u" ) 
		{
			cout << a[i] << "\t";
		}
	}
	return 0;
}
