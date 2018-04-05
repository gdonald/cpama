#include <stdio.h>

struct node
{
  int a;
};

int main(void)
{
  struct node x = { .a = 17 };

  printf("x.a: %d\n", x.a);
  printf("(&x)->a: %d\n", (&x)->a);

  return 0;
}
