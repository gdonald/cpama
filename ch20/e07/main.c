#include <stdio.h>

unsigned int rotate_left(unsigned int i, int n)
{
  return i >> (32 - n) | i << n;
}

unsigned int rotate_right(unsigned int i, int n)
{
  return i << (32 - n) | i >> n;
}

int main(void)
{
  unsigned int i;
  int n;

  printf("Enter a 32-bit unsigned int in hexadecimal: ");
  scanf("%x", &i);

  printf("Enter a number of bit to shift by: ");
  scanf("%d", &n);

  printf("rotate_left: %#x\n", rotate_left(i, n));
  printf("rotate_right: %#x\n", rotate_right(i, n));

  return 0;
}
