sum=0
x=1
y=2
while (y<=4000000):
    if y%2==0:
        sum=sum+y
    x,y=y,x+y
    
print(sum)