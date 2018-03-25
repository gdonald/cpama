#include <stdio.h>

#define NELEMS(a) (sizeof(a) / sizeof(a[0]))

int main(void)
{
  char a[17];

  printf("Number of elements: %lu\n", NELEMS(a));
  
  return 0;
}
