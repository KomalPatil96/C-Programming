#include <stdio.h>

void swapElements(int *arr1 , int *arr2 , int n)
{
    int i=0,temp=0;

    for(i=0 ; i<n ; i++)
    {
        temp    = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
}

int main()
{
    int i=0;


    int array_1[6] = {0,1,2,3,4};
    int array_2[6] = {5,6,7,8,9};


    swapElements(array_1,array_2,5);

    printf("\nThe arrays after swap are..\n");

    for(i=0 ; i<5 ; i++)
    {
        printf("\narra_1 [%d] : %d",i,array_1[i]);
    }

    printf("\n");

    for(i=0 ; i<5 ; i++)
    {
	printf("\narray_2 [%d] : %d",i,array_2[i]);
    }

    return 0;
}
