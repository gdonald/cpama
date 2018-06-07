#include <stdio.h>
#include <stdbool.h>

int line_length(const char *filename, int n)
{
  FILE *fp;
  int current_line = 1;
  char c;
  int length = 0;

  if((fp = fopen(filename, "r")) != NULL)
  {
    do
    {
      c = fgetc(fp);
      if(c == EOF) break;
      if(c == '\n') current_line++;

      if(current_line == n) break;
      
    } while(true);

    do
    {
      c = fgetc(fp);
      if(c == EOF || c == '\n') break;
      length++;
      
    } while(true);

    fclose(fp);
  }

  return length;
}

int main(void)
{
  printf("line length: %d\n", line_length("content.txt", 4));

  return 0;
}
