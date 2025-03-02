class s:
    def __init__(self,fee):
        self.fee=fee
    def total(self):
        return (self.fee/12)
        #total=int(self.fee/12)
class a:
    def __init__(self,fee,extra):
        self.fee=fee
        self.extra=extra
        self.vardhan=s(self.fee)
    def monthfee(self):
        return ("total:"+str(self.vardhan.total()+self.extra))
        
stu=a(120000,1)
print(stu.monthfee())