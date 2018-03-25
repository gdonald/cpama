#include <stdio.h>

#define AVG(x,y) (x+y)/2
#define FIXED(x,y) (((x)+(y))/2)

int main(void)
{
  printf("3 divided by the average of 4 and 5 is %.2g\n",   (float) 3 / AVG(4,5));
  printf("3 divided by the average of 4 and 5 is %.2g\n", (float) 3 / FIXED(4,5));
  
  return 0;
}
