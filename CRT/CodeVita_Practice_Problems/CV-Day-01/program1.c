#include <stdio.h>
int i,j;
int minimum_vehicles(int arr[], int n, int w) {
  for (i= 0; i < n - 1; i++) {
    for (j = i + 1; j < n; j++) {
      if (arr[i] < arr[j]) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  int vehicles = 0;
  int left = 0;
  int right = n - 1;

  while (left <= right) {
    if (arr[left] + arr[right] <= w) {
      right--;
      left++;
    }
    else {
      left++;
    }
    vehicles++;
  }

  return vehicles;
}

int main() {
  int arr1[] = {4, 2, 8, 5, 1, 3, 6};
  int n1 = sizeof(arr1) / sizeof(arr1[0]);
  int w1 = 8;
  int vehicles1 = minimum_vehicles(arr1, n1, w1);
  printf("Minimum number of vehicles needed 1: %d\n", vehicles1);
  int arr2[] = {4, 7, 9, 11, 6, 8, 3};
  int n2 = sizeof(arr2) / sizeof(arr2[0]);
  int w2 = 12;
  int vehicles2 = minimum_vehicles(arr2, n2, w2);
  printf("Minimum number of vehicles needed 2: %d\n", vehicles2);
  return 0;
}
