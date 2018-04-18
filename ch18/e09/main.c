#include <stdio.h>

char a(int foo)
{
  printf("foo: %d\n", foo);
  return 'a';
}

int bb[5] = { 0 };

int (*b(int bar))[5]
{
  printf("bar: %d\n", bar);
  return &bb;
}

float cc = 0.1f;

float *c(int baz)
{
  printf("baz: %d\n", baz);
  return &cc;
}

float *(*d(void))(int)
{
  printf("d()\n");
  return &c;
}

void g(int bam)
{
  printf("bam: %d\n", bam);
}

void (*e(int h, void (*f)(int)))(int)
{
  g(h);
  return f;
}

int main(void)
{
  // char (*w[10])(int);
  typedef char F(int);
  typedef F *Fp;
  typedef Fp FpA[10];
  FpA w = { &a };
  w[0](1);

  // int (*b(int))[5];
  typedef int A[5];
  typedef A *G(int);
  G b;
  b(2);
  
  // float *(*d(void))(int);
  typedef float *Hp(int);
  typedef Hp *I(void);
  I d;
  d();
  
  // void (*e(int, void (*f)(int)))(int);
  typedef void(*J)(int);
  typedef J K(int, J);
  K e;
  e(3, &g);

  return 0;
}
