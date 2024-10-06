#include<stdio.h>
void main()
{
	char s[10],op[10],ch;
	int sum=0;
	
	int i,r=0;
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='a' && s[i]<='z')
			op[r++]=s[i];
		else 
			sum+=s[i]-48; // char int to int 
	}
	op[r++]=sum+48; // int to char int 
	puts(op);
	
}
