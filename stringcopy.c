#include<stdio.h>
#include<string.h>
void main()
{
    char ch[20] = "komal";
    char ch2[20];
    strcpy(ch2,ch);
    printf("Value of second string is: %s",ch2);
    return 0;
}
