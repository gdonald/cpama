#include <stdio.h>
#include <string.h>

int main(void)
{
  char a[3] = { 'a', 'a', 'a' };
  char b[3] = { 'b', 'b', 'b' };

  printf("Enter a character with leading whitespace: ");
  scanf(" %c", a);
  printf("a: '%s'\n", a);
  printf("length: %lu\n\n", strlen(a));

  printf("Enter a character with leading whitespace: ");
  scanf("%1s", b);
  printf("a: '%s'\n", b);
  printf("length: %lu\n", strlen(b));
  
  return 0;
}
