class sbi:
    def __init__(self):
        self.balance=0
        print("account created sucessfully")
    def desposit(self):
        desposit=int(input("enter deposit amount"))
        self.balance=desposit
        print(self.balance)
    def withdraw(self):
        wd=int(input("enter withdraw amount"))
        if self.balance>=wd:
            print(wd)
            self.balance=self.balance-wd
        else:
            
            print("invalid funds")
            
    def display(self):
        # self.balance=self.balanc
         print(self.balance)
z=sbi()
z.desposit()
z.withdraw()
z.display()         
