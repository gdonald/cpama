#include <stdio.h>

int main(void)
{
  long i, n;
  long sqr;

  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in the table: ");
  scanf("%ld", &n);

  for(i = 1; i <= n; i++)
  {
    sqr = i * i;

    printf("%10ld%20ld\n", i, sqr);

    if(sqr < 0)
    {
      break;
    }
  }
  
  return 0;
}
