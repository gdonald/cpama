#include <stdio.h>

int main(void)
{
  int n;

  printf("Enter a number: ");
  scanf("%d", &n);

  for(int x = 1; x <= n; x++)
  {
    if(x % 2 == 0)
    {
      printf("%d\n", x * x);
    }
  }
  
  return 0;
}
