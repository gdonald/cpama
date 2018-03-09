#include <stdio.h>

#define MAX 99

void create_magic_square(int n, char magic_square[MAX][MAX])
{
  int row, col, last_row, last_col;

  last_row = row = 0;
  last_col = col = n / 2;

  magic_square[row][col] = 1;

  for(int x = 2; x <= n * n; x++)
  {
    row = last_row - 1;
    col = last_col + 1;

    if(row < 0)
    {
      row = n - 1;
    }

    if(col > n - 1)
    {
      col = 0;
    }

    if(magic_square[row][col] != 0)
    {
      row = last_row + 1;
      col = last_col;
    }

    last_row = row;
    last_col = col;
    
    magic_square[row][col] = x;
  }
}

void print_magic_square(int n, char magic_square[MAX][MAX])
{
  for(int r = 0; r < n; r++)
  {
    for(int c = 0; c < n; c++)
    {
      printf("%5d", magic_square[r][c]);
    }

    printf("\n");
  }

  printf("\n");
}

int main(void)
{
  int n;

  printf("This program creates a magic square of a specified size.\n");
  printf("The size must be an odd number between 1 and 99.\n");
  printf("Enter the size of a magic square: ");

  scanf("%d", &n);

  char a[MAX][MAX] = {{0}};

  create_magic_square(n, a);
  print_magic_square(n, a);
  
  return 0;
}
