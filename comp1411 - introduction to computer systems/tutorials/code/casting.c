#include "stdio.h"
#include "limits.h"

int main()
{
    int x = 100000;
    short y = (short) x;

    printf("size of int = %d bytes; MAX = %d; MIN = %d\n", sizeof(int), INT_MAX, INT_MIN);
    printf("size of short = %d bytes; MAX = %d; MIN = %d\n\n", sizeof(short), SHRT_MAX, SHRT_MIN);

    printf("x = %.8X [hex] / %d [dec]\n", x, x);
    printf("y = %.8X [hex] / %d [dec]\n", y, y);
    return 0;
}