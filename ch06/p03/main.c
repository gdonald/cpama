#include <stdio.h>

int main(void)
{
  int num, den;
  int m, n, r;
  
  printf("Enter a fraction: ");
  scanf("%d/%d", &num, &den);

  m = num;
  n = den;
  
  while(n != 0)
  {
    r = m % n;
    m = n;
    n = r;
  }

  printf("In lowest terms: %d/%d\n", num / m, den / m);
  
  return 0;
}
