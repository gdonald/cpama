#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  FILE *fp;
  int ch, count = 0;

  if(argc != 2)
  {
    printf("usage: main filename\n");
    exit(EXIT_FAILURE);
  }

  if((fp = fopen(argv[1], "r")) == NULL)
  {
    printf("%s can't be opened\n", argv[1]);
    exit(EXIT_FAILURE);
  }
  
  while((ch = getc(fp)) != EOF)
  {
    count++;
  }
  
  fclose(fp);

  printf("count: %d\n", count);
  
  return 0;
}
