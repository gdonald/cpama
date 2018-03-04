#include <ctype.h>
#include <stdio.h>

int main(void)
{
  char a[26] = { 1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10 };
  char n;
  int value = 0;

  printf("Enter a word: ");

  while((n = getchar()) != '\n')
  {
    value += a[toupper(n) - 65];
  }

  printf("Scrabble value: %d\n", value);

  return 0;
}
