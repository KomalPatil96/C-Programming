#include<stdio.h>
void main()
{
    int num;
    printf("Enter number between 1 to 7");
    scanf("%d", &num );

    switch(num)
    {
    case 1:
        if(num==1)
        printf("You have chosen day is Monday");
        break;
    case 2:
        if(num==2)
        printf("You have chosen day is Tuesday");
        break;
    case 3:
        if(num==3)
        printf("You have chosen day is Wednesday");
        break;
    case 4:
        if(num==4)
        printf("You have chosen day is Thursday");
        break;
    case 5:
        if(num==5)
        printf("You have chosen day is Friday");
        break;
    case 6:
        if(num==6)
        printf("You have chosen day is Saturday");
        break;
    case 7:
        if(num==7)
        printf("You have chosen day is Sunday");
        break;
    default:
         printf("You have entered a wrong choice");
    }
}
