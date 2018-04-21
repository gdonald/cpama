#include <stdio.h>

char a[1] = { 'a' };
struct t { int x; };

char *f(char *q) { return q; }

void ff(void) {}
void (*(f3(struct t *pp, long n)))(void);

void insert(void) { printf("insert\n"); }
void search(void) { printf("search\n"); }
void update(void) { printf("update\n"); }
void print(void) { printf("print\n"); }
void (*a2[])(void) = { insert, search, update, print };

struct t foo(int g, int h)
{
  printf("g: %d, h: %d\n", g, h);
  struct t s = { .x = 33 };
  return s;
}

struct t(*b[10])(int, int) = { foo };

int main(void)
{
  // (a)
  char *(*p)(char *) = &f;
  printf("a: %s\n", (*p)(a));

  // (b)
  struct t s = { .x = 17 };
  f3(&s, 83);

  // (c)
  (*a2[1])();

  // (d)
  (*b[0])(12, 13);
  printf("s->x: %d\n", (*b[0])(12, 13).x);

  return 0;
}

void (*(f3(struct t *pp, long n)))(void)
{
  printf("pp->x: %d\n", pp->x);
  printf("n: %ld\n", n);
  return ff;
}
