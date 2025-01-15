list=[]
n=int(input("enter"))
for i in range(n):
    ele=int(input("enter elements"))
    list.append(ele)
print(list)
def unique(list):
    u=[]
    for ele in list:
        c=list.count(ele)
        if c==1:
            u.append(ele)
    print("unique list")
    print(u)
            
unique(list)