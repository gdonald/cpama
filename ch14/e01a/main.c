#include <stdio.h>

#define CUBE(x) ((x) * (x) * (x))

int main(void)
{
  int x;

  printf("Enter an integer to cube: ");
  scanf("%d", &x);

  printf("The cube of %d is %d\n", x, CUBE(x));
  
  return 0;
}
