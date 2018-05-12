#include <stdio.h>

void print_bits(unsigned int n)
{
  int count = sizeof(n) * 8;

  for(int x = count - 1; x >= 0; x--)
  {
    printf((n & 1 << x) ? "1" : "0");

    if(0 == x % 4)
    {
      printf(" ");
    }
  }

  printf("\n");
}

unsigned int reverse_bits(unsigned int n)
{
  int tmp, count = sizeof(n) * 8;
  unsigned int i = 0;

  for(int x = 1; x <= count; x++)
  {
    tmp = count - x - 1;

    if(n & 1 << tmp)
    {
      i |= 1 << x;
    }
    else
    {
      i &= ~(1 << x);
    }
  }

  return i;
}

int main(void)
{
  unsigned int n, r;

  printf("Enter an unsigned int: ");
  scanf("%u", &n);

  r = reverse_bits(n);
  printf("With reversed bits: %u\n", r);

  print_bits(n);
  print_bits(r);
  
  return 0;
}
