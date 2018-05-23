#include <stdio.h>

int main(void)
{
  char *fmt = "%#012.5g\n";
  printf(fmt, 83.7361);
  printf(fmt, 29748.6607);
  printf(fmt, 1054932234.0);
  printf(fmt, 0.0000235218);

  return 0;
}
