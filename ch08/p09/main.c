#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

int main(void)
{
  char a[10][10], l;
  int r, c, dir, x = 0, y = 0, move = 0;
  int moves[4] = {0};

  struct timeval time;
  gettimeofday(&time, NULL);
  srand((time.tv_sec * 1000) + (time.tv_usec / 1000));
  
  for(r = 0; r < 10; r++)
  {
    for(c = 0; c < 10; c++)
    {
      a[r][c] = '.';
    }
  }

  for(l = 'A'; l <= 'Z'; l++)
  {
    a[x][y] = l;

    move = 0;

    if(y - 1 >= 0 && a[x][y - 1] == '.')
    {
      moves[move++] = 0;
    }

    if(x + 1 <= 9 && a[x + 1][y] == '.')
    {
      moves[move++] = 1;
    }

    if(y + 1 <= 9 && a[x][y + 1] == '.')
    {
      moves[move++] = 2;
    }

    if(x - 1 >= 0 && a[x - 1][y] == '.')
    {
      moves[move++] = 3;
    }

    if(move == 0)
    {
      break;
    }
    
    dir = rand() % move;

    switch(moves[dir])
    {
    case 0:
      y -= 1;
      break;
    case 1:
      x += 1;
      break;
    case 2:
      y += 1;
      break;
    case 3:
      x -= 1;
      break;
    }
  }
  
  for(r = 0; r < 10; r++)
  {
    for(c = 0; c < 10; c++)
    {
      printf("%c ", a[r][c]);
    }

    printf("\n");
  }

  printf("\n");
  
  return 0;
}
