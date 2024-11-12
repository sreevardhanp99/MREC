/* You are provided with 3 numbers : input1, input2, input3. Each of these are four digit 
numbers within the range>=1000 and <=9999
i.e., 
1000 <=input1<=9999
1000 <=input2<=9999
1000 <=input3<=9999

you are expected to find the key using the below formula.
key = (sum of largest digits of the numbers)-(sum of second largest digits of each number)

Given 3No, write an algorithm to find the key using the above mentioned formula

I1: 5834(1st-8 sl-5)
I2: 7916(1st-9 sl-7)
I3: 9999(1st-9 sl-9)

Key: (9+9+8)-(5+7+9)->5 
*/

#include<stdio.h>
void main()
{
	int n1,n2,n3;
	int m1,m2,m3,sm1,sm2,sm3;
	int key;
	
	scanf("%d %d %d",&n1,&n2,&n3);
	m1=largest(n1);
	m2=largest(n2);
	m3=largest(n3);

	sm1=slargest(n1,m1);
	sm2=slargest(n2,m2);
	sm3=slargest(n3,m3);
	
	key= (m1+m2+m3)-(sm1+sm2+sm3);
	printf("%d",key);		
}
int largest(int n)
{	int r;
	int max=0;
	while(n>0)
	{
		r=n%10;
		if(r>max)
		{
			max=r;
		}
		n=n/10;
	}
	return max;
}

int slargest(int n,int m)
{	
	int r,f=0;
	int smax=0;
	while(n>0)
	{		
		r=n%10;
		if(r!=m)
		{
			f=1;		
			if(r>smax && r!=m)
				smax=r;
		}
		n=n/10;
	}
	if(f==0)
		return m;
	else
		return smax;
}
