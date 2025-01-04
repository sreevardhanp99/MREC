class myep(Exception):
    pass
def bank():
    balance=10000
    withdraw=int(input("enter"))
    if withdraw>balance:
        raise myep("kal ana kal")
    print(withdraw)
    balance=balance-withdraw
    print("remaing balance",balance)
try:
    bank()
except myep as e:
    print(e)
    
else:
    
    print("everything ok")
finally:
    print("user defined exceptions are done")