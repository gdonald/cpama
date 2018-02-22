#include <stdio.h>

int main(void)
{
  int f, i = 0;
  float e = 1.0f, a, term;
  
  printf("Enter a small float: ");
  scanf("%f", &term);
  
  while(1)
  {
    i++;

    f = 1;

    for(int x = i; x > 0; x--)
    {
      f *= x;
    }

    a = (1.0f / f);
    
    e += a;

    if(a < term)
    {
      break;
    }
  }

  printf("%g\n", e);
  
  return 0;
}
