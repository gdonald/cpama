#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define MAX 1024

int compute_vowel_count(const char *sentence)
{
  int vowels = 0;

  for(; *sentence; sentence++)
  {
    switch(tolower(*sentence))
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
      vowels++;
      break;
    }
  }

  return vowels;
}

int main(void)
{
  char sentence[MAX];
  
  printf("Enter a sentence: ");
  fgets(sentence, MAX, stdin);

  printf("Your sentence contains %d vowels\n", compute_vowel_count(sentence));
 
  return 0;
}
