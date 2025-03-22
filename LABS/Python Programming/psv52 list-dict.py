list=[1,2,3]
list2=["a","b","c"]
f={}
for key in list:
    for value in list2:
        f[key]=value
        list2.remove(value)
        break
print(f)



  