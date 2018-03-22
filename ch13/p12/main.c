#include <stdio.h>

int main(void)
{
  char words[30][20], term, n;
  int row = 0, col = 0;

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

    case ' ':
      words[row++][col] = '\0';
      col = 0;
      break;

    default:
      words[row][col++] = n;
      break;
    }
  }

  words[row][col] = '\0';

  printf("Reversal of sentence: ");

  for(; row >= 0; row--)
  {
    printf("%s", words[row]);

    if(row != 0)
    {
      printf(" ");
    }
  }

  printf("%c\n", term);

  return 0;
}
