#include <stdio.h>

int main(void)
{
  int x;
  int value;

  printf("Enter an x value: ");
  scanf("%d", &x);
  
  value = (3 * x * x * x * x * x) + (2 * x * x * x * x) - (5 * x * x * x) - (x * x) + (7 * x) - 6;
  printf("The value is: %d\n", value);
  
  return 0;
}
