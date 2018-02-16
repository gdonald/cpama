#include <stdio.h>

int main(void)
{
  int x;
  int value;

  printf("Enter an x value: ");
  scanf("%d", &x);
  
  value = (((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6);
  printf("The value is: %d\n", value);
  
  return 0;
}
