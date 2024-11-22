#include "stdio.h"

int main()
{
    unsigned int x, y, z;
    x = 0x89ABCDEF;
    y = 0x76543210;
    
    // the solution using only bit operations
    z = (x & 0x000000FF) | (y & 0xFFFFFF00);
    printf("only bit operation, z = 0x%.8x\n\n", z);

    // the shift and addition solution
    // using shift for unsigned int type to clear bits to 0
    // z = ((x << 24) >> 24) + ((y >> 8) << 8);
    // printf("shift and addtion, z = 0x%.8x\n\n", z);

    return 0;
}