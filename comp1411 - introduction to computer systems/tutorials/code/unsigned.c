#include "stdio.h"

int main()
{
    unsigned int i;
    unsigned int cnt = 10;
    for (i = cnt; i >= 0; i--)
        printf("%u  %d\n", i, i);
    return 0;
} 