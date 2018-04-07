#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
  return (*(int *)a - *(int *)b);
}

int main(void)
{
  int a[100] = { 0 }, x;

  for(x = 0; x < 100; x++)
  {
    a[x] = rand() % 100;
  }

  qsort(&a[50], 50, sizeof(int), cmp);

  for(x = 0; x < 100; x++)
  {
    printf("a[%d] = %d\n", x, a[x]);
  }

  printf("\n");

  return 0;
}
