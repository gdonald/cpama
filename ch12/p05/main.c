#include <stdio.h>

int main(void)
{
  char term, n;
  char a[1024], *p = a, *q = a, *last = a;

  printf("Enter a sentence: ");

  while((n = getchar()) != '\n')
  {
    switch(n)
    {
    case '?':
    case '.':
    case '!':
      term = n;
      break;
    default:
      *p++ = n;
      break;
    }
  }

  printf("Reversal of sentence: ");

  last = p - 1;

  while(p-- > a)
  {
    if(*p == ' ' || p == a)
    {
      q = p - (*p == ' ' ? 0 : 1);

      while(q++ < last)
      {
	printf("%c", *q);
      }

      if(p != a)
      {
	printf(" ");
      }

      last = p - 1;
    }
  }

  printf("%c\n", term);

  return 0;
}
