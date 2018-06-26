#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  FILE *fp;
  int ch;

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
    printf("%c", isalpha(ch) ? toupper(ch) : ch);
  }
  
  fclose(fp);

  return 0;
}
