#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *my_malloc(int nbytes)
{
  void *p = malloc(nbytes);
  
  if(p == NULL)
  {
    printf("Unable to allocate memory\n");
    exit(EXIT_FAILURE);
  }

  return p;
}

int main(void)
{
  int n = 10;
  char *p = my_malloc(n);
  strncpy(p, "Hello!", n);
  printf("%s\n", p);
  
  return 0;
}
