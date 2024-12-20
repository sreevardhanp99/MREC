l = list(map(int,input().split()))
l1 =[]
l2 = []
for i in range(0,len(l)):
    if i % 2 ==0:
        l1.append(l[i])
    else:
        l2.append(l[i])
s1 = set(l1)
s2 = set(l2)
z1 = list(s1)
z2 = list(s2)
z1.sort()
z2.sort()
print(z1[-2]+z2[-2])