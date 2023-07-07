#include <stdio.h>

void Strfun(char **ptr , int count)
{
    int i=0;

    for(i=0;i<count;i++)
    {
        printf("\nString [%d] : %s",i,ptr[i]);  fflush(stdout);
    }

}

int main()
{
   char *buff[4] = {"Hello function" , "How are you?" , "Catch some strings"};

   Strfun(buff,3);
   return 0;
}
