#include <stdio.h>

int main(void)
{
  int n, row, col, last_row, last_col;

  printf("This program creates a magic square of a specified size.\n");
  printf("The size must be an odd number between 1 and 99.\n");
  printf("Enter the size of a magic square: ");

  scanf("%d", &n);

  int a[99][99] = {{0}};

  last_row = row = 0;
  last_col = col = n / 2;

  a[row][col] = 1;

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

    if(a[row][col] != 0)
    {
      row = last_row + 1;
      col = last_col;
    }

    last_row = row;
    last_col = col;
    
    a[row][col] = x;
  }
  
  for(int r = 0; r < n; r++)
  {
    for(int c = 0; c < n; c++)
    {
      printf("%5d", a[r][c]);
    }

    printf("\n");
  }

  printf("\n");
  
  return 0;
}
