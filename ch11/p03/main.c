#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
  int m, n, r;

  m = numerator;
  n = denominator;

  while(n != 0)
  {
    r = m % n;
    m = n;
    n = r;
  }

  *reduced_numerator = numerator / m;
  *reduced_denominator = denominator / m;
}

int main(void)
{
  int num, den, r_num, r_den;
  
  printf("Enter a fraction: ");
  scanf("%d/%d", &num, &den);

  reduce(num, den, &r_num, &r_den);
  
  printf("In lowest terms: %d/%d\n", r_num, r_den);
  
  return 0;
}
