#include <stdio.h>

int main(void)
{
  int i;
  int mask = 1 << 4;

  printf("mask: %#x\n", mask);

  printf("Enter an integer: ");
  scanf("%d", &i);

  printf("4th bit: %d\n", (i & mask) ? 1 : 0);

  if(i & mask)
    i &= ~mask;
  else
    i |= mask;

  printf("4th bit toggled: %d\n", (i & mask) ? 1 : 0);  
  printf("i: %d\n", i);

  return 0;
}
