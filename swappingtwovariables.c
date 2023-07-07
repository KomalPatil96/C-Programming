#include<stdio.h>
void main()
{
  int a=10;
  int b=20;

  int temp;
  temp = a;
  printf("before swapping values of a=%d,b=%d :\n",a,b);

  a = b;
  b = temp;

  printf ("After swapping : a=%d,b=%d",a,b);
  return 0;


}
