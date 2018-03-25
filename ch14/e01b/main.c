#include <stdio.h>

#define DB4(n) ((n) % 4)

int main(void)
{
  int n;

  printf("Enter an integer to divide by 4: ");
  scanf("%d", &n);

  printf("The remainder of %d divided by 4 is %d\n", n, DB4(n));
  
  return 0;
}
