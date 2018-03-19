#include <stdio.h>
#include <string.h>

#define MAX 20

int main(void)
{
  char word[MAX + 1];
  char smallest[MAX + 1];
  char largest[MAX + 1];
  
  while(strlen(word) != 4)
  {
    printf("Enter word: ");
    scanf("%s", word);
    
    if(strcmp(word, smallest) < 0)
    {
      sprintf(smallest, "%s", word);
    }

    if(strcmp(word, largest) > 0)
    {
      sprintf(largest, "%s", word);
    }
  }

  printf("\nSmallest: %s\n", smallest);
  printf("Largest: %s\n", largest);
  
  return 0;
}
