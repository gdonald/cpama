#include <stdio.h>

#define POLYNOMIAL(x) (             \
  3 * (x) * (x) * (x) * (x) * (x) \
+ 2 * (x) * (x) * (x) * (x)       \
- 5 * (x) * (x) * (x)             \
- 1 * (x) * (x)                   \
+ 7 * (x)                         \
- 6                               \
)

int main(void)
{
  int x;

  printf("Enter an integer: ");
  scanf("%d", &x);

  printf("POLYNOMIAL(%d): %d\n", x, POLYNOMIAL(x));

  return 0;
}
