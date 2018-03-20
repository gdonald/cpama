#include <stdio.h>

int main(int argc, char **argv)
{
  for(int x = argc - 1; x > 0; x--)
  {
    printf("%s ", argv[x]);
  }

  printf("\n");

  return 0;
}
