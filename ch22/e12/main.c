#include <stdio.h>
#include <stdbool.h>

int count_periods(const char *filename)
{
  FILE *fp;
  int n = 0;
  char c;
  
  if((fp = fopen(filename, "r")) != NULL)
  {
    /*
    while(fgetc(fp) != EOF)
    {
      if(fgetc(fp) == '.')
      {
	n++;
      }
    }
    */

    do
    {
      c = fgetc(fp);
      if(c == EOF) break;
      if(c == '.') n++;

    } while(true);

    fclose(fp);
  }

  return n;
}

int main(void)
{
  printf("periods: %d\n", count_periods("content.txt"));

  return 0;
}
