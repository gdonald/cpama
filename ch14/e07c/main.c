#include <stdio.h>

#define GENERIC_MAX(type)       \
type type##_max(type x, type y) \
{                               \
  return x > y ? x : y;         \
}

typedef unsigned long ul;
GENERIC_MAX(ul)

int main(void)
{
  printf("max: %lu\n", ul_max(2l, 3l));
  return 0;
}
