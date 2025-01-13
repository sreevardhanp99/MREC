import re
s1="bring me one good bat"
x=re.findall("bat",s1)
print(x)
s2="ramana is living in huts and she is always hits mosquitoes in the evening"
y=re.findall("hit|hut",s2)
print(y)



str="The total no of students are 120"
print(re.findall('\w+',str))


st="bb roy great britan having good wife "
x=re.findall("b*",st)
print(x)