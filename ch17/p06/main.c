#include "readline.h"

int cmp(const void *a, const void *b)
{
  return strcmp(*(char **)a, *(char **)b);
}

int main(void)
{
  int len, num_words = 0, max_words = 1;
  char *word, **words;

  words = malloc(sizeof(char *) * max_words);

  for(;;)
  {
    printf("Enter word: ");

    word = malloc(MAX);
    if(word == NULL)
    {
      printf("malloc failed\n");
      exit(EXIT_FAILURE);
    }

    len = read_line(word, MAX);

    if(len)
    {
      if(num_words == max_words)
      {
	max_words *= 2;
	char **new_words = realloc(words, sizeof(char *) * max_words);

	if(new_words == NULL)
	{
	  printf("realloc failed\n");
	  exit(EXIT_FAILURE);
	}

	words = new_words;
      }

      *(words + num_words++) = word;
    }
    else
    {
      break;
    }
  }

  qsort(words, num_words, sizeof(char *), cmp);

  printf("\nIn sorted order: ");

  for(int x = 0; x < num_words; x++)
  {
    printf("%s ", *(words + x));
  }
  
  printf("\n");
  
  return 0;
}
