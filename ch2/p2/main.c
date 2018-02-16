#include <stdio.h>

int main(void)
{
  int r = 10;
  float v = (4.0f / 3.0f) * 3.14159f * r * r * r;

  printf("Volume of a sphere with a radius of 10 ≈ %.2f\n", v);
  
  return 0;
}
