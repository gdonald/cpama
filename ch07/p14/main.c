#include <math.h>
#include <stdio.h>

int main(void)
{
  int x;
  double y = 1.0, ly, xdy;
  
  printf("Enter a positive number: ");
  scanf("%d", &x);

  do
  {
    ly = y;
    xdy = x / y;
    y = (y + xdy) / 2;
    
  } while(fabs(ly - y) > (.00001 * y));

  printf("Square root is: %.5f\n", y);
  
  return 0;
}
