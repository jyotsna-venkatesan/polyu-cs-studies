#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{

	int a, b;
	a = 40000; b = 50000;
	printf("40000*40000 = %d\n", a*a);
	printf("50000*50000 = %d\n", b*b);	

	// integer
	printf("\nThe size of 'int' on this machine is %d bytes\n", sizeof(int));
	printf("INT_MIN    = %+d\n", INT_MIN);
    printf("INT_MAX    = %+d\n", INT_MAX);
	printf("\n");

	return 0;
}

	
