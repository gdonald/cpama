#include <stdio.h>

int main(void)
{
  char term, n;
  char a[1024];
  int x = 0, last_i;

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
      a[x++] = n;
      break;
    }
  }

  last_i = x - 1;
  
  printf("Reversal of sentence: ");

  for(int i = last_i; i >= 0; i--)
  {
    if(a[i] == ' ' || i == 0)
    {
      for(int j = i; j <= last_i; j++)
      {
	if(a[j] != ' ')
	{
	  printf("%c", a[j]);
	}
      }

      if(i != 0)
      {
	printf(" ");
      }

      last_i = i - 1;
    }
  }

  printf("%c\n", term);

  return 0;
}
