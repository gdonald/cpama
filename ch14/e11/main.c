#include <stdio.h>

#define ERROR(fs, ...) (printf(fs, __VA_ARGS__))

int main(void)
{
  ERROR("Range error: index = %d\n", 1);
  return 0;
}
