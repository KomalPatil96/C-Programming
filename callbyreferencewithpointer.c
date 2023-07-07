#include<stdio.h>
void main()
{
    int a = 10;
    int b = 20;

    fun(&a,&b);
    printf("a=%d,b=%d", a,b);

}
void fun(int *ptr1, int *ptr2) //by using pointer variable manipulate the value of variable
{
    *ptr1 = 20;
    *ptr2 = 10;
}
