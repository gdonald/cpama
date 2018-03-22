#include <stdio.h>

double compute_average_word_length(const char *sentence)
{
  int words = 1, length = 0;

  while(*sentence++ != '\n')
  {
    switch(*sentence)
    {
    case ' ':
      words++;
      break;
    default:
      length++;
      break;
    }
  }

  return (float) length / words;
}

int main(void)
{
  char sentence[1024];
  
  printf("Enter a sentence: ");
  fgets(sentence, sizeof(sentence), stdin);
  printf("Average word length: %.1f\n", compute_average_word_length(sentence));
  
  return 0;
}
