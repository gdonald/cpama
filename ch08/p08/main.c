#include <stdio.h>

int main(void)
{
  int a[5][5] = {{0}};
  int high, low, r, c, t = 0;
  
  for(r = 0; r < 5; r++)
  {
    printf("Quiz grades for student #%d: ", r + 1);

    for(c = 0; c < 5; c++)
    {
      scanf("%d", &a[r][c]);
    }
  }

  printf("\nTotal / Average\n");

  for(r = 0; r < 5; r++)
  {
    printf("Student #%d: ", r + 1);

    for(c = 0; c < 5; c++)
    {
      t += a[r][c];
    }

    printf("%3d %3.1f\n", t, (float) t / 5);

    t = 0;
  }

  printf("\nAverage / High / Low\n");
  
  for(c = 0; c < 5; c++)
  {
    high = 0;
    low = 100;

    printf("Quiz #%d: ", c + 1);

    for(r = 0; r < 5; r++)
    {
      t += a[r][c];

      if(a[r][c] < low)
      {
	low = a[r][c];
      }

      if(a[r][c] > high)
      {
	high = a[r][c];
      }
    }

    printf("%3.1f %3d %3d\n", (float) t / 5, high, low);

    t = 0;
  }

  printf("\n");
  
  return 0;
}
