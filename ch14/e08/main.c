#include <stdio.h>

#define LINE(l) LINE2(l)
#define LINE2(l) #l
#define LINE_FILE \
const char *str = "Line " LINE(__LINE__) " of file " __FILE__

int main(void)
{
  LINE_FILE;
  printf("%s\n", str);

  return 0;
}
