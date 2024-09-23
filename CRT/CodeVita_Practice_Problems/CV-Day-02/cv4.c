// string compression 
// input : aaaabccccdd
// output: a4b4d2
#include<stdio.h>
int main()
{	
	char s[50],op[40],cc;
	int r=0;
	int i,c=1;
	gets(s);
	cc=s[0];
	for(i=1;s[i]!='\0';i++)
	{
		if(s[i]==cc)
			c++;
		else 
		{
			if(c>1)
			{
				op[r++]=cc;
				op[r++]=c+48;  // int to char int based on ASCII
			}
			else
				op[r++]=cc;
			cc=s[i];
			c=1;
			
		}	
	}
	if(c>1)
	{
		op[r++]=cc;
		op[r++]=c+48;  // int char to string based on ASCII
	}
	else
		op[r++]=cc;
	puts(op);
	return 0;
}
