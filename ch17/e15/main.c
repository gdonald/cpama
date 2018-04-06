#include <stdio.h>

int f1(int (*f)(int));
int f2(int i);

int main(void)
{
  printf("Answer: %d\n", f1(f2));
  return 0;
}

int f1(int (*f)(int))
{
  int n = 0;

  while((*f)(n)) n++;
  return n;
}

int f2(int i)
{
  printf("i: %d\n", i);
  return i * i + i - 12; // 3 * 3 + 3 - 12 = 0 will break the while loop, 0, 1, 2 will not
}
