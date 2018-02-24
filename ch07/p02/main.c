#include <stdio.h>

int main(void)
{
  int i, n;

  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in the table: ");
  scanf("%d", &n);

  for(i = 1; i <= n; i++)
  {
    if((i - 1) % 24 == 0)
    {
      printf("Press Enter to continue...");
      while(getchar() != '\n');
    }

    printf("%10d%10d\n", i, i * i);
  }
  
  return 0;
}
