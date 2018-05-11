#include <stdio.h>

unsigned int f(unsigned int i, int m, int n)
{
  return (i >> (m + 1 - n)) & ~(~0 << n);
}

int main(void)
{
  unsigned int i;
  int m, n;

  printf("Enter an unsigned int 'i': ");
  scanf("%d", &i);

  printf("Enter an int for 'm': ");
  scanf("%d", &m);

  printf("Enter an int for 'n': ");
  scanf("%d", &n);

  printf("f(): %d\n", f(i, m, n));
  printf("~(~0 << n): %d\n", ~(~0 << n));
  
  return 0;
}
