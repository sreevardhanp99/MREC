// s1="abc" s2 ="978"
// output : abc24

#include<stdio.h>
void main()
{
	char s1[]="abc";
	char s2[]="978";
	int sum=0,i;
	char r[10];
	for(i=0;s2[i]!='\0';i++)
	{
		sum+=s2[i]-48;
	}
	strcat(s1,itoa(sum,r,10));
	puts(s1);
	
}
