#include <stdio.h>

#define islower(c) ((c) >= 'a' && (c) <= 'z')

int main(void)
{
  char c = 'z';
  
  printf("islower(c++): %d\n", islower(c++));

  return 0;
}
