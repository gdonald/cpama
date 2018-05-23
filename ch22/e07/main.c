#include <stdio.h>

int main(void)
{
  int i, j, n;
  float x;

  char *a = "10 20 30\n";
  char *b = "1.0 2.0 3.0\n";
  char *c = "0.1 0.2 0.3\n";
  char *d = ".1 .2 .3\n";

  n = sscanf(a, "%d%f%d", &i, &x, &j);
  printf("i: %d\n", i);
  printf("x: %g\n", x);
  printf("j: %d\n", j);
  printf("n: %d\n\n", n);

  n = sscanf(b, "%d%f%d", &i, &x, &j);
  printf("i: %d\n", i);
  printf("x: %g\n", x);
  printf("j: %d\n", j);
  printf("n: %d\n\n", n);

  n = sscanf(c, "%d%f%d", &i, &x, &j);
  printf("i: %d\n", i);
  printf("x: %g\n", x);
  printf("j: %d\n", j);
  printf("n: %d\n\n", n);

  n = sscanf(d, "%d%f%d", &i, &x, &j);
  printf("i: %d\n", i);
  printf("x: %g\n", x);
  printf("j: %d\n", j);
  printf("n: %d\n", n);

  return 0;
}
