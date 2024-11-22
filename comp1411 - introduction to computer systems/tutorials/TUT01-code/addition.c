#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
	double a = 1E20;
	double b = -1E20;
	double c = 3.14;

	printf("(1E20 + -1E20) + 3.14 = %f\n", (a + b) + c);
	printf("1E20 + (-1E20 + 3.14) = %f\n", a + (b + c));

	printf("\n");
	
	printf("1E20 + -1E20 = %f\n", a + b);
	printf("-1E20 + 3.14 = %f\n", b + c);

	printf("\n");
	
	printf("size of 'double' = %d bytes\n", sizeof(double));
	printf("DOUBLE_MAX = %lf\n", DBL_MAX);

	return 0;
}

