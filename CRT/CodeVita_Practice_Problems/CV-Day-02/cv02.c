#include<stdio.h>
void main()
{
	char s[10],op[10],ch;
	int i,r=0;
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='a' && s[i]<='z')
			op[r++]=s[i];
		else 
			op[r++]=s[i-1]+s[i]-48;
	}
	op[r++]='\0';
	puts(op);
}
