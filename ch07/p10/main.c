#include <ctype.h>
#include <stdio.h>

int main(void)
{
  char c;
  int vowels = 0;
  
  printf("Enter a sentence: ");
  
  while((c = getchar()) != '\n')
  {
    switch(c)
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

  printf("Your sentence contains %d vowels\n", vowels);
 
  return 0;
}
