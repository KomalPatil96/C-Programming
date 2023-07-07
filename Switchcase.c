#include<stdio.h>
void main()
{
    int num;
    printf("Enter number between 1 to 5 ");
    scanf("%d",&num);


switch(num)
{
case 1:
    if(num==1)
    printf("Color is red");
    break;
case 2:
    if(num==2)
    printf("Color is orange");
    break;
case 3:
    if(num==3)
    printf("Color is green");
    break;
case 4:
    if(num==4)
    printf("Color is blue");
    break;
case 5:
    if(num==5)
    printf("Color is black");
    break;
default:
    printf("You have entered a wrong choice");
}
}
