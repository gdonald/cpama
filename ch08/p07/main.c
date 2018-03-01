#include <stdio.h>

int main(void)
{
  int a[5][5] = {{0}};
  int r, c, t = 0;
  
  for(r = 0; r < 5; r++)
  {
    printf("Enter row %d: ", r + 1);
    
    for(c = 0; c < 5; c++)
    {
      scanf("%d", &a[r][c]);
    }
  }

  printf("\nRow totals: ");

  for(r = 0; r < 5; r++)
  {
    for(c = 0; c < 5; c++)
    {
      t += a[r][c];
    }

    printf("%d ", t);

    t = 0;
  }

  printf("\nColumn totals: ");

  for(c = 0; c < 5; c++)
  {
    for(r = 0; r < 5; r++)
    {
      t += a[r][c];
    }

    printf("%d ", t);

    t = 0;
  }

  printf("\n");
  
  return 0;
}
