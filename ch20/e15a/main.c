#include <stdio.h>

struct
{
  int flag: 1;
} s;

int main(void)
{
  s.flag = 1;
  printf("%d\n", s.flag);
  
  return 0;
}
