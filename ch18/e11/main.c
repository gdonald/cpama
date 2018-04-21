#include <stdio.h>

/*
int f(int)[];    // functions can't return arrays
int g(int)(int); // functions can't return functions
int a[10](int);  // array elements can't be functions
*/

int y2 = 13;
int a2[1] = { 7 };

int *f(int x)
{
  printf("x: %d\n", x);
  return a2;
}

int f2(int r) { return r; }
int (*g(int))(int);
int foo(int bar) { return bar * 2; }

int (*a[10])(int) = { foo };

int main(void)
{
  printf("a2[0]: %d\n", f(9)[0]);

  printf("r: %d\n", (*(*g))(86)(2));

  printf("bar * 2: %d\n", (*a[0])(21));

  return 0;
}

int (*g(int y))(int)
{
  printf("y: %d\n", y);
  return f2;
}
