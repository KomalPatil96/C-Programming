#include<stdio.h>

void main()
{
   printf("Calculate sum of two numbers:\n");
   sum();
}

void sum()
{
    int a;
    int b;
    printf("Enter two numbers:\n");

    scanf("a=%d,b=%d", &a,&b);

    int c = a+b;

    printf("sum=%d",c);

}
