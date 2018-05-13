#include <limits.h>
#include <stdio.h>

struct f
{
  unsigned int fraction: 23;  
  unsigned int exponent: 8;
  unsigned int sign:     1;
};

int main(void)
{
  struct f fp = { .fraction = 3, .exponent = 2, .sign = 1 };

  printf("bits: %lu\n", sizeof(fp) * CHAR_BIT);

  return 0;
}
