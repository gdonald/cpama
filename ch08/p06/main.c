#include <ctype.h>
#include <stdio.h>

#define N 1024

int main(void)
{
  char a[N] = {0};
  int x;

  printf("Enter message: ");

  for(x = 0; x < N; x++)
  {
    a[x] = toupper(getchar());

    switch(a[x])
    {
    case 'A':
      a[x] = '4';
      break;
    case 'B':
      a[x] = '8';
      break;
    case 'E':
      a[x] = '3';
      break;
    case 'I':
      a[x] = '1';
      break;
    case 'O':
      a[x] = '0';
      break;
    case 'S':
      a[x] = '5';
      break;
    }

    if(a[x] == '\n')
    {
      break;
    }
  }

  printf("In BIFF-speak: ");

  for(x = 0; x < N; x++)
  {
    if(a[x] == '\n')
    {
      break;
    }

    printf("%c", a[x]);
  }

  printf("!!!!!!!!!!\n");
  
  return 0;
}
