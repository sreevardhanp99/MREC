#include<stdio.h>
void main()
{
	char s[20],ch,op[20];
	int i,j,r=0;
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='a' && s[i]<='z')
		{
			ch=s[i];
		}
		else
		{
			for(j=1;j<=s[i]-48;j++)
			{
				op[r++]=ch;
			}
		}
	}
	op[r++]='\0';
	puts(op);
}
