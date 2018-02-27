#include <stdio.h>

int main(void)
{
  int words = 1, length = 0;
  char c;
  
  printf("Enter a sentence: ");

  while((c = getchar()) != '\n')
  {
    switch(c)
    {
    case ' ':
      words++;
      break;
    default:
      length++;
      break;
    }
  }

  printf("Average word length: %.1f\n", (float) length / words);
  
  return 0;
}
