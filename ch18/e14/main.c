#include <stdio.h>

int main(void)
{
  // (a)
  int a[1] = { 17 };
  printf("a[0]: %d\n", a[0]);

  // (b)
  enum e { foo };
  printf("foo == 0: %d\n", foo == 0);

  // (c)
  struct t { int x; } s = { .x = 6 };
  printf("s.x: %d\n", s.x);

  // (d)
  union u { int x; char c; } d = { .x = 5 };
  printf("d.x: %d\n", d.x);

  // (e)
  // None of the above
  
  return 0;
}
