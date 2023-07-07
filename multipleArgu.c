#include <stdio.h>

void simpleFun(int rollno , char *name , float marks)
{
   printf("\nName is : %s",name);
   printf("\nRoll No. is : %d",rollno);

   printf("\nMarks are : %f OR Marks are : %.02f",marks,marks);
}


int main()
{
    int Roll = 100;
    float marks = 50.5;
    char name[20] = "Komal Patil";


    simpleFun(Roll , name , marks);

    return 0;
}
