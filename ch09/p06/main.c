#include <stdio.h>

int poly(int x)
{
  return (3 * x * x * x * x * x) + (2 * x * x * x * x) - (5 * x * x * x) - (x * x) + (7 * x) - 6;
}

int main(void)
{
  int x;

  printf("Enter a value for x: ");
  scanf("%d", &x);

  printf("The polynomial value is: %d\n", poly(x));

  return 0;
}
