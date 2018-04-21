#include <stdio.h>

int f2(double d)
{
  printf("d: %f\n", d);
  return 17;
}

float f3(long l)
{
  printf("l: %ld\n", l);
  return 1.23f;
}

int (*f(float (*)(long), char *))(double);

int main(void)
{
  printf("f(): %d\n", f(f3, "g")(2.34));
  return 0;
}

int (*f(float (*fp)(long), char *a))(double)
{
  printf("fp(2): %f\n", fp(2));
  printf("a: %s\n", a);
  return f2;
}
