#include "stdio.h"
#include "stdlib.h"

int main()
{
    int x, y, z;
    x  = 10;

    y = x * 22;
    printf("y = x*22 = %d\n", y);

    z = (x << 4) + (x << 2) + (x << 1);
    printf("z = (x << 4) + (x << 2) + (x << 1) = %d\n", z);

    return 0;
}
