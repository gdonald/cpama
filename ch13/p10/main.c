#include <stdio.h>

#define MAX 80

void reverse_name(char *name)
{
  char first, *p = name;

  while(*p++ == ' ');
  first = *(p - 1);

  while(*p++ != ' ');

  while(*p != '\n')
  {
    printf("%c", *p++);
  }

  printf(", %c\n", first);
}

int main(void)
{
  char name[MAX];
  
  printf("Enter a first and last name: ");
  fgets(name, MAX, stdin);
  reverse_name(name);

  return 0;
}
