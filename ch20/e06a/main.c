#include <stdio.h>

unsigned short swap_bytes(unsigned short i)
{
  unsigned short tmp = i << 8 | i >> 8;
  return tmp;
}

int main(void)
{
  unsigned short n;

  printf("Enter a hexadecimal number (up to four digits): ");
  scanf("%hx", &n);

  printf("Number with bytes swapped: %hx\n", swap_bytes(n));
  
  return 0;
}
