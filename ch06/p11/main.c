#include <stdio.h>

int main(void)
{
  int n, f;
  float e = 1.0f;
  
  printf("Enter an integer: ");
  scanf("%d", &n);

  for(int i = 1; i <= n; i++)
  {
    f = 1;

    for(int x = i; x > 0; x--)
    {
      f *= x;
    }

    e += (1.0f / f);
  }

  printf("%g\n", e);
  
  return 0;
}
