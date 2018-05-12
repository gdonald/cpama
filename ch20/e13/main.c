#include <stdio.h>

int main(void)
{
  unsigned int n = 1000000000;

  while(n > 0)
  {
    printf("n: %u\n", n);
    n &= n - 1;
  }

  return 0;
}
