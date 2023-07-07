#include<stdio.h>
#include<string.h>
void main()
{
    char str1[20];
    char str2[20];
    printf("Enter 1st string:");
    gets(str1);
    printf("Enter 2nd string:");
    gets(str2);
    if(strcmp(str1,str2)== 0)
        printf("string are equals");
    else
        printf("string are not equals");
    return 0;
}
