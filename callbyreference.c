#include<stdio.h>
int main()
{
 int x=100;
 int y =200;
 int add;
 add = sum(&x,&y);
 printf("x=%d,y=%d,add=%d",x,y,add);

}
int sum(int *a, int *b)
{

   int *c = *a + *b;
}
