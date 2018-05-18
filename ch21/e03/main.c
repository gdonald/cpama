#include <stdio.h>

// The line below causes error: redefinition of 'bar'
//#define foo (bar)

int bar(void)
{
  return 1;
}

int foo(void)
{
  return bar();
}

#define foo (bar)

int main(void)
{
  printf("foo: %d\n", foo());

  return 0;
}
