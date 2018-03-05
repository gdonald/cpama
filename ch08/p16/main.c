#include <ctype.h>
#include <stdio.h>

int main(void)
{
  int a[26] = {0};
  int n;
  
  printf("Enter first word: ");

  while((n = getchar()) != '\n')
  {
    if(isalpha(n))
    {
      n = tolower(n) - 97;
      a[n]++;
    }
  }

  printf("Enter second word: ");

  while((n = getchar()) != '\n')
  {
    if(isalpha(n))
    {
      n = tolower(n) - 97;
      a[n]--;
    }
  }

  printf("The words are ");
  
  for(int x = 0; x < 26; x++)
  {
    if(a[x] != 0)
    {
      printf("not ");
      break;
    }
  }

  printf("anagrams.\n");
  
  return 0;
}
