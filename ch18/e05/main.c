
#include <stdio.h>
#include "file2.h"

static int a = 0;

void f1(void)
{
  printf("a: %d\n", ++a);

  int b = 6;
  printf("b: %d\n", b);
}

void f3(int x)
{
  printf("x: %d\n", ++x);
}

int main(void)
{
  f1();
  f2();

  int x = 7;
  f3(x);
  printf("x: %d\n", x);
  
  return 0;
}
