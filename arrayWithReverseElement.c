#include<stdio.h>
#define MAX100
int main()
{
  int i,j;
  int n;
  int arr[j], revArr[i];

  printf("Enter total number of elements:");
  scanf("%d",&n);

  printf("Enter array elements:\n");
  for(i=0 ; i<n; i++)
  {
      printf("Enter element %d:", i+1);
      scanf("%d", &arr[i]);
  }
  for(i=(n-1), j=0; i>=0; i--,j++ )
  {
      revArr[j] = arr[i];

  }
  printf("\n Array element after reverse:\n");
  for(i=0 ; i<n; i++)
  {
      printf("%d\n", revArr[i]);
  }
  return 0;


}
