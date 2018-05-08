#include <stdio.h>

#define MK_COLOR(red, green, blue) ((long) (blue) << 16 | (green) << 8 | (red))

int main(void)
{
  int red, green, blue;

  printf("Enter red value (0-255): ");
  scanf("%d", &red);

  printf("Enter green value (0-255): ");
  scanf("%d", &green);

  printf("Enter blue value (0-255): ");
  scanf("%d", &blue);

  
  printf("Color: %ld\n", MK_COLOR(red, green, blue));
  
  return 0;
}
