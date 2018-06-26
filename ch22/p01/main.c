#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  FILE *fp;

  if(argc < 2)
  {
    printf("usage: main filename\n");
    exit(EXIT_FAILURE);
  }

  for(int x = 1; x < argc; x++)
  {
    if((fp = fopen(argv[x], "r")) == NULL)
    {
      printf("%s can't be opened\n", argv[x]);
      exit(EXIT_FAILURE);
    }

    printf("%s can be opened\n", argv[x]);
    fclose(fp);
  }

  return 0;
}
