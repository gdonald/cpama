#include <stdio.h>

int f(int i)
{
  static int j = 0;
  return i * j++;
}

int main(void)
{
  printf("f(10) = %d\n", f(10));
  f(10);
  f(10);
  f(10);
  printf("f(10) = %d\n", f(10));
  return 0;
}
