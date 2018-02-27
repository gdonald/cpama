#include <stdio.h>

int main(void)
{
  char c, first;
  
  printf("Enter a first and last name: ");

  while((c = getchar()) == ' ');
  first = c;

  while((c = getchar()) != ' ');

  while((c = getchar()) != '\n')
  {
    if(c != ' ')
    {
      printf("%c", c);
    }
  }

  printf(", %c.\n", first);

  return 0;
}
