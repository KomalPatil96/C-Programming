#include <stdio.h>
#define MAX 5

int main(){
	int arr[MAX]={0};
	int i;
	int b=10;
	int count=0;

	printf("Enter array elements:\n");
	for(i=0; i<MAX; i++){
		scanf("%d", &arr[i]);
		if(arr[i]%b ==0)
			count++;
	}
	printf("Total elements divisible by %d is %d\n",b, count);

	return 0;
}
