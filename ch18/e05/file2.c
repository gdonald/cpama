
#include "file2.h"

static int a = 47;
int c = 34;

void f2(void)
{
  printf("a: %d\n", ++a);

  int b = 87;
  printf("b: %d\n", b);  

  printf("c: %d\n", ++c);
}
