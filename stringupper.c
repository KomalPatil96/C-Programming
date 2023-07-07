#include<stdio.h>
#include<string.h>
void main()
{
    char str[20];
    printf("Enter string:");
    gets(str);
   // printf("string is :",str);
    printf("\nUpper string is: %s",strupr(str));
    return 0;
}
