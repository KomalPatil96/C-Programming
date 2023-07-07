#include <stdio.h>

// function 1
int fun_1(int a , int b)
{
    return (a+b);
}

// function 2
int fun_2(int temp)
{
    printf("\nThe value of temp is : %d",temp);
}

int main()
{

    int i=5 , j=6;
    fun_2(fun_1(i,j));

    return 0;
}
