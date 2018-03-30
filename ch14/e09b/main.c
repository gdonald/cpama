#include <stdio.h>

#define MEDIAN(x,y,z) (          \
  (y) < (x) && (x) < (z) ? (x) : \
  (x) < (y) && (y) < (z) ? (y) : \
  (x) < (z) && (z) < (y) ? (z) : \
  (z) < (x) && (x) < (y) ? (x) : \
  (z) < (y) && (y) < (x) ? (y) : \
  (y) < (z) && (z) < (x) ? (z) : (z))

int main(void)
{
  int x, y, z;

  printf("Enter three integers: ");
  scanf("%d %d %d", &x, &y, &z);

  printf("MEDIAN(%d,%d,%d): %d\n", x, y, z, MEDIAN(x,y,z));

  return 0;
}
