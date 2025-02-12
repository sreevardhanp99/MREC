list=[]
n=int(input("enter the no.of number"))
for i in range(n):
    e=int(input("enter the numbers"))
    list.append(e)
print(list)

def dup(list):
    d={}
    for e in list:
        c=list.count(e)
        if c>=2:
            d[e]=c
        
    print("duplicates elements")
    print(d)
dup(list)