#include<stdio.h>
void main()
{
    int num;
    printf("Enter number between 1 to 12");
    scanf("%d",&num);

    switch (num)
    {
    case 1:
        if(num)
        printf("You have Chosen January");
        break;
    case 2:
        if(num)
        printf("You have Chosen February");
        break;
    case 3:
        if(num)
        printf("You have Chosen March");
        break;
    case 4:
        if(num)
        printf("You have Chosen April");
        break;
     case 5:
        if(num)
        printf("You have Chosen May");
        break;
     case 6:
        if(num)
        printf("You have Chosen Jun");
        break;
     case 7:
        if(num)
        printf("You have Chosen Jully");
        break;
     case 8:
        if(num)
        printf("You have Chosen August");
        break;
    case 9:
        if(num)
        printf("You have Chosen September");
        break;
    case 10:
        if(num)
        printf("You have Chosen Octomber");
        break;
    case 11:
        if(num)
        printf("You have Chosen November");
        break;
    case 12:
        if(num)
        printf("You have Chosen December");
        break;
    default:
        printf("You have entered a wrong choice");
    }
}
