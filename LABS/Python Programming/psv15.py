
from threading import*
from time import*
for thread in enumerate():
    print("Thread Name=",thread.getName())
  
print("No.Of Threads=",active_count())

print("Thread=",current_thread())

print(thread.is_alive())

print(get_ident())

class z(Thread):
    
   def run(self):
    
       for i in range(3):
        
           print("hi")
           sleep(2)
   def  run(self):
      for i in range(3):
           print("hello")
t1=z()
t1.start()
t2=z()
t2.start()
