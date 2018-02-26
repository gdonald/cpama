#include <stdio.h>

int main(void)
{
  int area, prefix, number;

  printf("Enter phone number: [(xxx) xxx-xxxx]: ");
  scanf("(%3d) %3d-%4d", &area, &prefix, &number);

  printf("You entered: %d.%d.%d\n", area, prefix, number);
  
  return 0;
}
