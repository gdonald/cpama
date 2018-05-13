#include <limits.h>
#include <stdio.h>

union
{
  struct
  {
    unsigned int fraction: 23;  
    unsigned int exponent: 8;
    unsigned int sign:     1;
  } f;

  float value;

} u;

int main(void)
{
  u.f.sign = 1;
  u.f.exponent = 128;
  u.f.fraction = 0;

  printf("float value: %0.1f\n", u.value);
  
  return 0;
}
