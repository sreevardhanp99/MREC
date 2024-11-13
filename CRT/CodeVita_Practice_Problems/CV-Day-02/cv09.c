/* you have two special dice with 6 faces, each. For each dice you know the numbers
written on each face
You roll the two dices at the same time, and you add up the numbers showing on the upper faces. 
What is the most probable sum value you'll ge?
*/

#include<stdio.h>
void main()
{
	int arr1[]={1,2,3,4,5,6},arr2[]={1,2,3,4,5,6};
	int r[13]={0};
	int i,j,s,k=0;
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			s=arr1[i]+arr2[j];
			r[s]++;	
		}
	}
	for(j=0;j<13;j++)
	{
		printf("%d\t",r[j]);
	}
}
