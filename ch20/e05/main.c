#include <stdio.h>

#define GET_RED(color)   ((int)(color)       & 0xff)
#define GET_GREEN(color) ((int)(color) >> 8  & 0xff)
#define GET_BLUE(color)  ((int)(color) >> 16 & 0xff)

int main(void)
{
  long color;

  printf("Enter color: ");
  scanf("%ld", &color);

  printf("Red: %d\n",   GET_RED(color));
  printf("Green: %d\n", GET_GREEN(color));
  printf("Blue: %d\n",  GET_BLUE(color));
  
  return 0;
}
