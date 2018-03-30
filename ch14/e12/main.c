#include <stdio.h>

#define M 10

int main(void)
{
#if M
  printf("#if M\n");
#endif

#ifdef M
  printf("#ifdef M\n");
#endif

#ifndef M
  printf("#ifndef M\n");
#endif

#if defined(M)
  printf("#if defined(M)\n");
#endif

#if !defined(M)
  printf("#if !defined(M)\n");
#endif

  return 0;
}
