#include<stdio.h>
void main()
{
    int a;
    printf("Enter day of the week");
    scanf("%d",&a);

    while(a<=5)
    {
        printf("Enter day of the week");
        scanf("%d",&a);
    }
    printf("You are Out of loop");
}
