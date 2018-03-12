#include <stdio.h>

#define N 1024

int main(void)
{
  char a[N], c;
  int x = 0;

  printf("Enter a message: ");
  
  while((c = getchar()) != '\n' && x < N)
  {
    a[x++] = c;
  }

  printf("Reversal is: ");
  
  while(x > 0)
  {
    printf("%c", a[--x]);
  }

  printf("\n");
  
  return 0;
}
