#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

char *my_fgets(char *str, int n, FILE *stream)
{
  int length = 0;
  char c;

  do
  {
    c = fgetc(stream);
    if(c == EOF || c == '\n' || length == n - 1) break;
    str[length++] = c;
    
  } while(true);

  if(c == '\n') str[length++] = c;
  str[length] = '\0';

  if(length == 0) return NULL;
  return str;
}

int main(void)
{
  FILE *fp;
  char str[100];

  fp = fopen("content.txt", "r");
  if(fp == NULL)
  {
    printf("Cannot open file\n");
    exit(EXIT_FAILURE);
  }

  if(my_fgets(str, 100, fp) != NULL)
  {
    printf("str: %s", str);
  }
  else
  {
    printf("my_fgets returned NULL\n");
  }

  fclose(fp);

  // empty file
  fp = fopen("empty.txt", "r");
  if(fp == NULL)
  {
    printf("Cannot open file\n");
    exit(EXIT_FAILURE);
  }

  if(my_fgets(str, 100, fp) != NULL)
  {
    printf("str: %s", str);
  }
  else
  {
    printf("my_fgets returned NULL\n");
  }

  fclose(fp);
  
  return 0;
}
