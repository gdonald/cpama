#include <stdio.h>

int main(void)
{
  int r;

  printf("Enter the radius of a sphere: ");
  scanf("%d", &r);
  
  float v = (4.0f / 3.0f) * 3.14159f * r * r * r;

  printf("Volume of a sphere with a radius of %d ≈ %.2f\n", r, v);
  
  return 0;
}
