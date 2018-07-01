#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  FILE *fp;
  int ch, x, offset = 0, i = 0;
  char buffer[10] = { 0 };

  if(argc != 2)
  {
    printf("usage: main filename\n");
    exit(EXIT_FAILURE);
  }

  if((fp = fopen(argv[1], "rb")) == NULL)
  {
    printf("%s can't be opened\n", argv[1]);
    exit(EXIT_FAILURE);
  }

  printf("Offset              Bytes              Characters\n");
  printf("------  -----------------------------  ----------\n");
  
  while(true)
  {
    ch = getc(fp);
 
    buffer[i++] = ch;

    if(i == 10)
    {
      i = 0;

      printf("%6d  ", offset += 10);
      
      for(x = 0; x < 10; x++)
      {
	printf("%02X ", buffer[x]);
      }

      printf(" ");
      
      for(x = 0; x < 10; x++)
      {
	if(isprint(buffer[x]))
	{
	  printf("%c", buffer[x]);
	}
	else
	{
	  printf(".");
	}
      }

      printf("\n");
    }

    if(ch == EOF)
    {
      printf("%6d  ", offset += 10);
      
      for(x = 0; x < 10; x++)
      {
	if(i > x + 1)
	{
	  printf("%02X ", buffer[x]);
	}
	else
	{
	  printf("   ");
	}
      }

      printf(" ");
      
      for(x = 0; x < i; x++)
      {
	if(i > x + 1)
	{
	  if(isprint(buffer[x]))
	  {
	    printf("%c", buffer[x]);
	  }
	  else
	  {
	    printf(".");
	  }
	}
      }

      printf("\n");
      
      break;
    }
  }
  
  fclose(fp);

  return 0;
}
