#include <stdio.h>

unsigned short create_short(unsigned char high_byte, unsigned char low_byte)
{
  return (high_byte << 8) + low_byte;
}

int main(void)
{
  unsigned char high_byte = 2, low_byte = 1;

  printf("short created: %hu\n", create_short(high_byte, low_byte));
  
  return 0;
}
