#include <math.h>
#include <stdio.h>

int main(void)
{
  long double x, f = 1;
  
  printf("Enter a positive integer: "); // <= 1754
  scanf("%Lf", &x);
  printf("Factorial of %Lf: ", x);

  do
  {
    f *= x--;

  } while(x > 1);
  
  printf("%Lf\n", f);
  
  return 0;
}
