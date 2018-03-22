#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

#define MAX    80
#define A      26
#define OFFSET 97

bool are_anagrams(const char *word1, const char *word2)
{
  int a[A] = {0};

  for(; *word1; word1++)
  {
    if(isalpha(*word1))
    {
      a[tolower(*word1) - OFFSET]++;
    }
  }

  for(; *word2; word2++)
  {
    if(isalpha(*word2))
    {
      a[tolower(*word2) - OFFSET]--;
    }
  }

  for(int x = 0; x < A; x++)
  {
    if(a[x] != 0)
    {
      return false;
    }
  }

  return true;
}

int main(void)
{
  char w1[MAX], w2[MAX];

  printf("Enter first word: ");
  fgets(w1, MAX, stdin);

  printf("Enter second word: ");
  fgets(w2, MAX, stdin);

  printf("The words are%s anagrams.\n", are_anagrams(w1, w2) ? "" : " not");
  
  return 0;
}
