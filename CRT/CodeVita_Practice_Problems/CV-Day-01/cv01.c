#include<stdio.h>
void main()
{
	int n,s=0,r,x=0;
	printf("Enter n value : ");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		if(r%2==0)
		{
			s+=(r+1)*(int)pow(10,x++);
		}
		else
		{
			s+=(r-1)*(int)pow(10,x++);
		}
		
		n=n/10;
	}
	printf("%d",s);
}
