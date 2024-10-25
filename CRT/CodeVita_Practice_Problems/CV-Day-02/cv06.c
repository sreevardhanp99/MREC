// you are given an array of n integers and another int k. how manu numbers appear in the array at least k times 
// standard input 
// the first line contains two int N and K
// the second line contains N int, representing the elements of the array

// standard input  
// 5 2
// 1 2 3 2 1
// standard ouput 
// 2 
  

#include<stdio.h>
void main()
{	int n,j,k,i,c,p;
	int rc=0;
	scanf("%d",&n,&k);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		c=1;
		for(j=i+1;j<n;j++)
		{
			if(arr[i]=arr[j])
			{
				c++;
				for(p=j;p<n-1;p++)
				{
					arr[p]=arr[p+1];
				}
				n--;
				j--;
			}
		}
		if(c>=k)
			rc++;	
	}
	printf("%d",rc);
}
