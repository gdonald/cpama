#include <stdio.h>

#define GENERIC_MAX(type)       \
type type##_max(type x, type y) \
{                               \
  return x > y ? x : y;         \
}

GENERIC_MAX(long)

int main(void)
{
  printf("max: %ld\n", long_max(2l, 3l));
  return 0;
}
