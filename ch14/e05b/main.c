#include <stdio.h>
#include <string.h>

#define TOUPPER(c) ('a'<=(c)&&(c)<='z'?(c)-'a'+'A':(c))

int main(void)
{
  char s[5];
  int i;

  strcpy(s, "0123");
  i = 0;
  putchar(TOUPPER(s[++i])); // 2

  return 0;
}
