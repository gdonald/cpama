#include <stdio.h>

#define DOUBLE(x) (2 * (x))

int main(void)
{
  printf("The value of DOUBLE(1+2): %d\n", DOUBLE(1+2));
  printf("The value of 4 / DOUBLE(2): %d\n", 4 / DOUBLE(2));
  
  return 0;
}
