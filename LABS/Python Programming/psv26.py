class a():
    def __init__(self):
        print("composite class")
    def z(self):
        print("composite class method")
        
class b():
    def __init__(self):
        self.obj=a()
        print("component class")
    def x(self):
        self.obj.z()
        print("component class method")
        
        
ob=b()
ob.x()
        
        
     