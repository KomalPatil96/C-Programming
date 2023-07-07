#include <stdio.h>

void Strfun(char *ptr)
{
    printf("The String is : %s",ptr);
}

int main()
{
	char buff[20]="Hello Function";

	Strfun(buff);

	return 0;
}
