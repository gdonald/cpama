#include <stdio.h>

#define GENERIC_MAX(type)       \
type type##_max(type x, type y) \
{                               \
  return x > y ? x : y;         \
}

// 1) expands: unsigned long unsigned long_max(unsigned long x, unsigned long y) { return x > y ? x : y; }
// 2) produces warning: duplicate 'unsigned' declaration specifier
GENERIC_MAX(unsigned long)

int main(void)
{
  printf("max: %ld\n", long_max(2l, 3l));
  return 0;
}
