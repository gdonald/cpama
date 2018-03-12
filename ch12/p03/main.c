#include <stdio.h>

#define N 1024

int main(void)
{
  char a[N], *p = a;

  printf("Enter a message: ");
  
  while(p < a + N)
  {
    *p = getchar();

    if(*p == '\n')
    {
      break;
    }

    p++;
  }

  printf("Reversal is: ");
  
  while(p-- >= a)
  {
    printf("%c", *p);
  }

  printf("\n");
  
  return 0;
}
