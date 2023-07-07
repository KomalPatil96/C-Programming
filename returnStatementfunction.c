#include<stdio.h>



int main()
{
    int result ;
    result = add(20,20);
    printf("result=%d",result);
}

int add(int num1, int num2)   // void not used
{
    int sum = num1 + num2;
    return sum;
}
