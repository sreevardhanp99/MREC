import re
p='[A-Za-z-]+ [A-Za-z-]+'
s='CSE Dept DS Dept'
print(re.findall(p,s))
['CSE Dept', 'DS Dept']
