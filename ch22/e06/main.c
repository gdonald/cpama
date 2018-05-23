#include <stdio.h>

int main(void)
{
  char *fmt = "%d widget%s\n";

  int w = 1;
  printf(fmt, w, w == 1 ? "" : "s");

  w = 2;
  printf(fmt, w, w == 1 ? "" : "s");

  return 0;
}
