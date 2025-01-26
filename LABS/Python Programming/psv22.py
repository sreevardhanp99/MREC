list=[]
n=int(input("enter"))
for i in range(n):
    ele=int(input("enter the no"))
    list.append(ele)
print(list)

def dup(list):
    d={}
    for ele in list:
        c=list.count(ele)
        if c>=2:
            d[ele]=c
    print(d)   
    
        
dup(list)    