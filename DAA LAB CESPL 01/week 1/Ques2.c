#include <stdio.h>

int binarySearch(int array[], int x, int low, int high) {
  
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

int main() {
  int m;
  scanf("%d",&m);
  int a[m];

  for(int i=0;i<m;i++)
  {
    scanf("%d",&a[i]);
  }
  
  int key;
  scanf("%d",&key);
  int result = binarySearch(a,key,0,m);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);
  return 0;
}