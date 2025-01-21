import re
pattern=re.compile(r'[A-Za-z]+[A-Za-z]+')
t="malla reddy engineering college"
x=re.findall(pattern,t)

print(x)