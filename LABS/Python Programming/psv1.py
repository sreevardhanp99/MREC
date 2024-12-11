import re
x="alendher ki pulihora tappa em radhu"

a=re.findall("alendher",x)
b=re.split("\s",x,2)
c=re.sub("alendher","praveen",x)
d=re.search("a",x)
e=re.finditer("\w+",x)
print(a)
print(b)
print(c)
print(d)
for x in e:
    print(x.group())
    
    

