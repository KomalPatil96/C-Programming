#include<stdio.h>
void main()
{
  int a = 10;
  int *ptr = &a;  //pointer variable (*ptr)
  printf("%d \n",a); //value

  printf("%p \n",&a); //Address

  printf("%p \n",ptr);//Address

  printf("%d \n",*ptr);// value
  }
