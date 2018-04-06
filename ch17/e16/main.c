#include <stdio.h>

int g(int n)
{
  return n;
}

int sum(int (*f)(int), int start, int end)
{
  int total = 0;
  
  for(int x = start; x <= end; x++)
  {
    total += f(x);
  }

  return total;
}

int main(void)
{
  printf("sum: %d\n", sum(g, 1, 3));
  
  return 0;
}
