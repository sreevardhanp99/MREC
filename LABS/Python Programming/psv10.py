f={}
s=input("enter the string")
for i in s:
    if i in f:
        f[i]=f[i]+1
    else :
        f[i]=1    
print(f)