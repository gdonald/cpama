#include <math.h>
#include <stdio.h>

#define DISP2(f,x,y) printf(#f"(%g) = %g\n"#f"(%g) = %g\n", x, f(x), y, f(y))

int main(void)
{
  DISP2(sqrt, 3.0, 3.4);

  return 0;
}
