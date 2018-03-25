#include <stdio.h>

#define AREA(x,y) (x)*(y)
#define FIXED(x,y) ((x)*(y))

int main(void)
{
  printf("The area of 2 / the area of 2 and 3 is %.g\n",  (float) 2 / AREA(2,3));
  printf("The area of 2 / the area of 2 and 3 is %.g\n", (float) 2 / FIXED(2,3));
  
  return 0;
}
