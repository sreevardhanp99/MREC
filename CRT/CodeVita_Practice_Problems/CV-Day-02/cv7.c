/* Given an array of integers, replace every element with the greatest element on the right 
side in the array 
 replace last element with 0 as there no element on the right side of it.
*/
#include<stdio.h>
void main()
{
	int i,j,arr[10];
	int n,max;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		max=arr[i+1];
		for(j=i+2;j<n;j++)
		{
			if(arr[j]> max)
			{
				max=arr[j];
			}
		}
		if(i!=(n-1))
			arr[i]=max;
		else
			arr[i]=0;
	}
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}
