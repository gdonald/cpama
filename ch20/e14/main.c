#include <limits.h>
#include <stdio.h>

struct f
{
  unsigned int sign:     1;
  unsigned int exponent: 8;
  unsigned int fraction: 23;  
};

int main(void)
{
  struct f fp = { .sign = 1, .exponent = 2, .fraction = 3 };

  printf("bits: %lu\n", sizeof(fp) * CHAR_BIT);

  return 0;
}
