#include<stdio.h>
int i,j;
int  minimum_vehicles(int arr[],int n, int w) 
{
  for(i = 0; i < n - 1; i++) 
  {
    for (j = i + 1; j < n; j++) 
	{
      if (arr[i] < arr[j]) 
	  {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }

  // Initialize the number of vehicles to 0.
  int vehicles = 0;
  int i,j;

  // Initialize two pointers, one at the beginning and one at the end of the array.
  int left = 0;
  int right = n - 1;

  while (left <= right) {
    // If the sum of the weights of the left and right elements is less than or equal to the weight limit,
    // then we can load them into the same vehicle.
    if (arr[left] + arr[right] <= w) {
      // Increment the right pointer and decrement the left pointer.
      right--;
      left++;
    }
    // Otherwise, we have to load the left element into a separate vehicle.
    else {
      left++;
    }
    // Increment the number of vehicles.
    vehicles++;
  }

  return vehicles;
};

int main() {
  int arr1[10],w1,i,j ;
  for(i=0;i<10;i++)
  {
  scanf("%d",arr1[i]);
  }
  int n1 = sizeof(arr1) / sizeof(arr1[0]);
  printf("enter the weight:");
  scanf("%d",&w1);

  int vehicles1 = minimum_vehicles(arr1, n1, w1);
  printf("Minimum number of vehicles needed (Test case 1): %d\n", vehicles1);
  int arr2[10],w2;
  int n2 = sizeof(arr2) / sizeof(arr2[0]);
  for(j=0;j<10;j++)
  {
      scanf("%d",arr2[j]);
  }
  scanf("%d",&w2);

  int vehicles2 = minimum_vehicles(arr2, n2, w2);
  printf("Minimum number of vehicles needed (Test case 2): %d\n", vehicles2);

  return 0;
}
