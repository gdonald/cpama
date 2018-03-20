#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  int total = 0;
  
  for(int x = argc - 1; x > 0; x--)
  {
    total += atoi(argv[x]);
  }

  printf("Total: %d\n", total);
  
  return 0;
}
