#include <stdio.h>

#define N 10
#define INC(x) ((x) + 1)
#define SUB(x,y) ((x)-(y))
#define SQR(x) ((x)*(x))
#define CUBE(x) (SQR(x)*(x))
#define M1(x,y) x##y
#define M2(x,y) #x #y

int main(void)
{
  int a[N] = {0}, i, j = 0, k = 0, m = 0, jk = 0;

#ifdef N
  i = j;
#else
  j = i;
#endif

  i = 10 * INC(j);
  
  i = SUB(j,k);
  i = SQR(SQR(j));
  i = CUBE(j);
  i = M1(j,k);
  puts(M2(i,j));

//#undef SQR
  i = SQR(j);
//#define SQR
  i = SQR(j);

  printf("use a[N]: %d\n", a[0]);
  printf("use m: %d\n", m);
  
  return 0;
}
