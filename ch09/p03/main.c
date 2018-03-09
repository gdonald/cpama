#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate_random_walk(char walk[10][10])
{
  int r, c, dir, x = 0, y = 0, move = 0;
  int moves[4] = {0};

  for(r = 0; r < 10; r++)
  {
    for(c = 0; c < 10; c++)
    {
      walk[r][c] = '.';
    }
  }

  for(char l = 'A'; l <= 'Z'; l++)
  {
    walk[x][y] = l;

    move = 0;

    if(y - 1 >= 0 && walk[x][y - 1] == '.')
    {
      moves[move++] = 0;
    }

    if(x + 1 <= 9 && walk[x + 1][y] == '.')
    {
      moves[move++] = 1;
    }

    if(y + 1 <= 9 && walk[x][y + 1] == '.')
    {
      moves[move++] = 2;
    }

    if(x - 1 >= 0 && walk[x - 1][y] == '.')
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
}

void print_array(char walk[10][10])
{
  for(int r = 0; r < 10; r++)
  {
    for(int c = 0; c < 10; c++)
    {
      printf("%c ", walk[r][c]);
    }

    printf("\n");
  }

  printf("\n");
}

int main(void)
{
  char a[10][10];
  
  srand((unsigned) time(NULL));
  generate_random_walk(a);
  print_array(a);
  
  return 0;
}
