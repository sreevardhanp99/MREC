
#include<stdio.h>
void main()
{
	int x,c=0;
	scanf("%d",&x);
	while(x!=1)
	{
		if(x==2)
		{
			x--;
		}
		else
		{
			if(x%3==0)
			{
				x=x/3;
			}
			else if(x%3==1)
			{
				x--;
			}
			else 
				x++;
		}
		c++;
	}
	printf("%d",c);
}
