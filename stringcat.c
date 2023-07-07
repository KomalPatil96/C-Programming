#include<stdio.h>
#include<string.h>
void main()
{
    char ch[20] = "komal";
    char ch2[20] = "patil";
    strcat(ch,ch2);
    printf("Value of first string is: %s", ch);
    return 0;
}
