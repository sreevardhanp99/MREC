l = list(map(int,input().split()))
print(l)
n =int(input())
s =0
for i in range(n-1,len(l),n):
    s += l[i]
    
print(s)
  