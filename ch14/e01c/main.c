#include <stdio.h>

#define PROD(x, y) ((x) * (y) < 100 ? 1 : 0)

int main(void)
{
  int x, y;

  printf("Enter two integers: ");
  scanf("%d %d", &x, &y);

  printf("The product of %d and %d is < 100: %d\n", x, y, PROD(x, y));
  
  return 0;
}
