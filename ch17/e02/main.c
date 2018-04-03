#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *duplicate(char *str)
{
  char *p = malloc(strlen(str) + 1);

  if(p == NULL)
  {
    printf("Unable to allocate memory\n");
    exit(EXIT_FAILURE);
  }

  strncpy(p, str, strlen(str));

  return p;
}

int main(void)
{
  printf("%s\n", duplicate("Hello!"));
  
  return 0;
}
