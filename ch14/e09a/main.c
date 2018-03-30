#include <stdio.h>

#define CHECK(x,y,n) ((x) > 0 && (x) < ((n)-1) && (y) > 0 && (y) < ((n)-1) ? 1 : 0)

int main(void)
{
  int x = 1, y = 2, n = 4;
  
  printf("CHECK(%d,%d,%d): %d\n", x, y, n, CHECK(x,y,n));

  return 0;
}
