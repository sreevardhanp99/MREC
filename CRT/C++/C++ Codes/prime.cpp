#include <iostream>
using namespace std;
int main()
{
	int n,i,j;
	
	for(j=1;j<=100;j++)
	{
		int count=0;
		//cout <<"Enter n value : ";
		//cin >>n;
	
		for(i=1;i<=j;i++)
		{
			if(j%i==0)
			{
				count++;
				
			}
		}
		if(count==2)
		{
			cout << j <<"  is a prime number\n";
		}
		else
		{
			cout << j <<"  is not a prime number\n ";
		}
	
	}
	return 0;
}
