#include <stdio.h>

#define M(x,y) ((x)^=(y),(y)^=(x),(x)^=(y))

int main(void)
{
  int x, y;

  printf("Enter a value for x: ");
  scanf("%d", &x);

  printf("Enter a value for y: ");
  scanf("%d", &y);
  
  M(x,y);

  printf("x: %d, y: %d\n", x, y);

  return 0;
}
