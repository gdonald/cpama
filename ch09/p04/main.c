#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

void read_word(int counts[26])
{
  int n;
  
  printf("Enter word: ");

  while((n = getchar()) != '\n')
  {
    if(isalpha(n))
    {
      n = tolower(n) - 97;
      counts[n]++;
    }
  }
}

bool equal_array(int counts1[26], int counts2[26])
{
  for(int x = 0; x < 26; x++)
  {
    if(counts1[x] != counts2[x])
    {
      return false;
    }
  }

  return true;
}

int main(void)
{
  int a[26] = {0}, b[26] = {0};

  read_word(a);
  read_word(b);
  
  printf("The words are ");

  if(!equal_array(a, b))
  {
    printf("not ");
  }

  printf("anagrams.\n");
  
  return 0;
}
