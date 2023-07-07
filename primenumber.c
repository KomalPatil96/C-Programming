#include<stdio.h>
int isprime(int num)
{
    int i;
    int flag = 0;

    for(i=2; i<num/2; i++)
    {
        if(num%i == 0)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
        return 0;
    else
        return 1;
}
int main()
{
    int i, j;
    int arr[] = {100,200,31,13,97,10,20,11};
    int len = sizeof(arr)/sizeof(arr[0]);
    for(i=0; i<len; i++)
    {
        if(isprime(arr[i]))
        {
           for(j=i; j<len; j++)
           {
               arr[j] = arr[j+1];
           }
           i--;
           len--;
        }
    }
    for(i=0; i<len; i++)
        printf("%3d\n",arr[i]);
    printf("\n");

    return 0;
}

