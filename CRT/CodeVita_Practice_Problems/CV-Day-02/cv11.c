/* n1 = 48 2 4 6 8 12 16 24
   n2 = 52 2 4 13 26
gcd of these two numbers 

38 12 
38 % 12 ==> 2
12 % 2 ==> 0

a % b == r
if r!=0 
	then perform b % r until u get 0 remainder 
	then r is gcd of 2 numbers
*/

#include<stdio.h>
void main()
{
	int a,b,r=-1;
	scanf("%d %d,",&a,&b);
	while(r!=0)
	{
		r=a%b;
		if(r==0)
		{
			printf("%d",b);
			break;
		}		
		a=b;
		b=r;	
	}
	
}
