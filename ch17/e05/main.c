#include <stdio.h>

int main(void)
{
  struct
  {
    union
    {
      char a, b;
      int c;
    } d;
    int e[5];
  } f, *p = &f;

  // (a)
  // p->b = ' '; // error
  p->d.b = ' ';

  // (b)
  p->e[3] = 10;
  
  // (c)
  (*p).d.a = '*';
  
  // (d)
  // p->d->c = 20; // error
  p->d.c = 20;
  
  return 0;
}
