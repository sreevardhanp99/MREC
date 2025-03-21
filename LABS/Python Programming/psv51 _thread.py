import _thread
from time import*
def a(name,wait):
    for i in range(2):
        print("thread=",name)
        sleep(wait)
        
_thread.start_new_thread(a,("1st",1))
_thread.start_new_thread(a,("2st",1))