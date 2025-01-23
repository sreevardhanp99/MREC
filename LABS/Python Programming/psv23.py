import re
pattern = '([A-Z]\, )+[A-Za-z]+'
text = 'M, R, EC'
m = re.match(pattern, text)
print(m.group())
