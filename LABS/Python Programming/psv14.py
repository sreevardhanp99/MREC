n=[1,2,3,3,4,5]

L=len(n)
for i in n:
    num=n[i]
    n[i]=n[L-i-1]
    n[L-i-1]=num
print(n)