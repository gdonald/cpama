#include <stdio.h>

int main(void)
{
  // (a)
  static int s;
  printf("s: %d\n", s); // no warning, already initialized

  int t;
  printf("t: %d\n", t); // warning: variable 't' is uninitialized

  return 0;
}
