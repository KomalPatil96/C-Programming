#include <stdio.h>
#include <conio.h>
void main()
{
    int arr[50];
    int pos,i,num;
    printf("\n Enter the numbers of elements in an array:\n");

    scanf("%d",&num);

    printf("\n Enter %d elements in arrays: \n",num);

    for(i=0; i<num; i++)
    {
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
    }

    printf("Define the position of the array element where you want to delete:\n");
    scanf("%d",&pos);
}
