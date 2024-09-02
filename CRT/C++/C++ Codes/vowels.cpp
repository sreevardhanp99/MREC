#include<iostream>
#include <string.h>
using namespace std;
int main()
{
	char s[20];
	cout << "Enter a string : ";
	gets(s);
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ) 
		{
			cout << sc[i] << "\t";
		}
	}
	return 0;
}
