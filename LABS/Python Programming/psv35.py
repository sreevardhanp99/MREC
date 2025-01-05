f1=open("z.txt","a")
f1.write("hi handsome")
f1.close()
f2=open("x.txt","r")
with open("z.txt","r") as f1,open("x.txt","w") as f2:
    for line in f1:
        f2.write(line)
        
        
        
f2.close()
