#include <stddef.h>
#include <stdio.h>

struct s
{
  char a;
  int b[2];
  float c;
} t;

int main(void)
{
  printf("sizeof(struct s): %lu\n\n", sizeof(struct s));

  printf("sizeof(t.a): %lu\n", sizeof(t.a));
  printf("sizeof(t.b): %lu\n", sizeof(t.b));
  printf("sizeof(t.c): %lu\n\n", sizeof(t.c));

  printf("offsetof(struct s, a): %lu\n", offsetof(struct s, a));
  printf("offsetof(struct s, b): %lu\n", offsetof(struct s, b));
  printf("offsetof(struct s, c): %lu\n\n", offsetof(struct s, c));

  printf("hole between a and b: %lu\n", offsetof(struct s, b) - offsetof(struct s, a) - sizeof(t.a));
  printf("hole between b and c: %lu\n", offsetof(struct s, c) - offsetof(struct s, b) - sizeof(t.b));
  printf("hole after c: %lu\n\n", sizeof(struct s) - offsetof(struct s, c) - sizeof(t.c));
  
  return 0;
}
