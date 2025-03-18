def ball_collide(b1,b2):
    if int(b1[2]<=b2[2]):
        return True
    else:
        return False
a=int(input("enter"))
b=int(input("enter"))
c=int(input("enter"))
d=int(input("enter"))
e=int(input("enter"))
f=int(input("enter"))
ball1=(a,b,c)
ball2=(d,e,f)
status=ball_collide(ball1,ball2)
if status==True:
    print("balls are collide")
else:
    print("balls are not collide")