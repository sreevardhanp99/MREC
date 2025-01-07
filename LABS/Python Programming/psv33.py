n=int(input("enter"))
rev=0
while(n>0):
    r=n%10
    rev=rev+r
    n=n//10
 
print(rev)
str=input("enter")
if (str==str[ ::-1]):
    print("palindrome")
else:
    print("not palindrome")