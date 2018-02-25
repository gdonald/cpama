#include <ctype.h>
#include <stdio.h>

int main(void)
{
  printf("sizeof(short)        %2lu\n", sizeof(short));
  printf("sizeof(int)          %2lu\n", sizeof(int));
  printf("sizeof(long)         %2lu\n", sizeof(long));
  printf("sizeof(float)        %2lu\n", sizeof(float));
  printf("sizeof(double)       %2lu\n", sizeof(double));
  printf("sizeof(long double)  %2lu\n", sizeof(long double));

  return 0;
}
