list=[]
j={}
n=int(input("enter the nunber"))
for i in range(1,n+1):
    a=int(input("enter the"+str(i)+" elements"))
    list.append(a)
print(list)
list1=[]
for j in list:
    if  j not in list1:
        list1.append(j)
    else:
        print(j,end=" ")
