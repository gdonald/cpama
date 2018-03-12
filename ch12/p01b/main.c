#include <stdio.h>

#define N 1024

int main(void)
{
  char a[N], c;
  char *p = a;

  printf("Enter a message: ");
  
  while((c = getchar()) != '\n' && p < a + N)
  {
    *p++ = c;
  }

  printf("Reversal is: ");
  
  while(p-- >= a)
  {
    printf("%c", *p);
  }

  printf("\n");
  
  return 0;
}
