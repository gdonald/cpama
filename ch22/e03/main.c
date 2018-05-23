#include <stdio.h>

int main(void)
{
  FILE *fp;
  char *filename = "filename";

  if((fp = fopen(filename, "r")) != NULL)
  {
    printf("%s is open\n", filename);
    fclose(fp);
  }

  return 0;
}
