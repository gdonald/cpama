#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define N 1024

int main(void)
{
  char a[N], c;
  char *p = a, *q;
  
  printf("Enter a message: ");

  while((c = getchar()) != '\n' && p < a + N)
  {
    c = tolower(c);

    if(c >= 'a' && c <= 'z')
    {
      *p++ = c;
    }
  }

  q = a;

  while(p-- > a)
  {
    if(*p != *q++)
    {
      printf("Not a palindrome\n");
      exit(EXIT_SUCCESS);
    }
  }

  printf("Palindrome\n");

  return 0;
}
