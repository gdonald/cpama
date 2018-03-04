#include <stdio.h>

int main(void)
{
  int x;
  char last[20];
  char c, first;
  
  printf("Enter a first and last name: ");

  while((c = getchar()) == ' ');
  first = c;

  while((c = getchar()) != ' ');

  x = 0;
  while((c = getchar()) != '\n')
  {
    if(c != ' ')
    {
      last[x++] = c;
    }
  }

  printf("%s", last);
  printf(", %c.\n", first);

  return 0;
}
