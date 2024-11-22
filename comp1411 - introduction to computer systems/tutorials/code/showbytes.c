#include "stdio.h"
#include "stdlib.h"


typedef unsigned char *pointer;
/* size_t == unsigned int */

void show_bytes(pointer start, size_t len){
  size_t i;
  for (i = 0; i < len; i++)
    printf("%p\t0x%.2X\n",start+i, start[i]);
  printf("\n");
}

int main()
{
  int a = 0x123456;
  printf("a = 0x123456 = %d [decimal]\n", a);
  show_bytes( (pointer) &a, sizeof(int));
  return 0;
}
