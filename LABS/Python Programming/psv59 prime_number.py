n=int(input("enter the no."))
if n>1:
    for i in range(2,int(n/2)+1):
        if n%i==0:
            print('enter number is not prime')
            break
    else:
        print("prime number ")
else :
    print("not prime number")