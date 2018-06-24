#include <stdio.h>
#include <stdlib.h>

#define SIZE 64

int main(void)
{
  int n = 2;

  FILE *fp = fopen("records", "r");
  if(fp == NULL)
  {
    printf("Failed to open records\n");
    exit(EXIT_FAILURE);
  }
  
  // (a)
  fseek(fp, n * SIZE, SEEK_SET);
  
  // (b)
  fseek(fp, -SIZE, SEEK_END);

  // (c)
  fseek(fp, SIZE, SEEK_CUR);

  // (d)
  fseek(fp, -2 * SIZE, SEEK_CUR);

  fclose(fp);
  
  return 0;
}
