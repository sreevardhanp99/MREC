class c1:
 
    x=int(input("enter the number"))  
    y=int(input("enter the number")) 
    q=x+y
    w=x-y
    e=x*y
    def add(self):
        print(self.q)
class c2:
     def sub(self):
         print(self.w)
class c3(c1,c2):
     def mul(self):
         print(self.e)
m=c3()
m.add()
m.sub()
m.mul()
        