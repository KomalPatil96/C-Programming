#include<stdio.h>
void main()
{
    int num[5];
    int i;
    printf("Enter any Five number");
    for(i=0; i<=4; i++)
    {
        scanf("%d",&num[i]);
        printf("%d",num[i]);
    }
}
