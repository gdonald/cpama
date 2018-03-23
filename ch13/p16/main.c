#include <stdio.h>

#define N 1024

void reverse(char *message)
{
  char tmp, *p = message, *q = message;

  while(*q && *q != '\n')
  {
    q++;
  }

  q--;
  
  while(p < q)
  {
    tmp = *p;
    *p++ = *q;
    *q-- = tmp;
  }
}

int main(void)
{
  char a[N];

  printf("Enter a message: ");
  fgets(a, sizeof(a), stdin);
  reverse(a);
  
  printf("Reversal is: %s", a);
  
  return 0;
}
