d={}
list=[]
n=int(input("Enter number of elements to be insert:"))
for i in range(n):
    a=int(input("enter list elements:"))
    list.append(a)
print(list)
for a in list:
    c=list.count(a)
    if c>=2:
        d[a]=c
print("Duplicates elements")
print(d)