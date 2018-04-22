#include <stdio.h>

#define PI 3.14159f

int main(void)
{
  char c = 65;
  printf("c: %c\n", c);

  // 'j' is not a compile-time constant
  // static int i = 5, j = i * i;

  double d = 2 * PI;
  printf("d: %f\n", d);
  
  double angles[] = { 0, PI / 2, PI, 3 * PI / 2 };
  printf("angles[3]: %f\n", angles[3]);
  
  return 0;
}
