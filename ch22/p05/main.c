#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define KEY '&'

int main(int argc, char *argv[])
{
  FILE *orig_fp, *new_fp;
  char c;
  
  if(argc != 3)
  {
    printf("usage: ./main orig_file new_file\n");
    exit(EXIT_FAILURE);
  }
  
  if((orig_fp = fopen(argv[1], "rb")) == NULL)
  {
    printf("%s can't be opened\n", argv[1]);
    exit(EXIT_FAILURE);    
  }

  if((new_fp = fopen(argv[2], "wb")) == NULL)
  {
    fclose(orig_fp);
    printf("%s can't be opened\n", argv[2]);
    exit(EXIT_FAILURE);    
  }

  while((c = getc(orig_fp)) != EOF)
  {
    fprintf(new_fp, "%c", c ^ KEY);
  }

  fclose(new_fp);
  fclose(orig_fp);
  
  return 0;
}
