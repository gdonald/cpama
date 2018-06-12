#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int my_fputs(const char *str, FILE *stream)
{
  while(*str != '\0')
  {
    if(fputc(*str++, stream) == EOF)
    {
      return EOF;
    }
  }
  
  return 0;
}

int main(void)
{
  FILE *fp;
  char *str = "my string";

  fp = fopen("output.txt", "wb");
  if(fp == NULL)
  {
    printf("Cannot open output file\n");
    exit(EXIT_FAILURE);
  }

  printf("status: %d\n", my_fputs(str, fp));

  fclose(fp);

  return 0;
}
