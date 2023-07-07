#include<stdio.h>
#include<string.h>
void main()
{
    char str[20];
    printf("Enter string:");
    gets(str);
   // printf("string is :",str);
    printf("\Lower string is: %s",strlwr(str));
    return 0;
}
