#include <stdio.h>
#include "stack.h"

int main(void)
{
  printf("push(1)\n");
  push(1);

  printf("push(2)\n");
  push(2);

  printf("push(3)\n");
  push(3);

  printf("pop(): %d\n", pop());
  printf("pop(): %d\n", pop());
  printf("pop(): %d\n", pop());

  for(int x = 0; x < 3; x++)
  {
    printf("push(%d)\n", x);
    push(x);
  }

  for(int x = 0; x < 2; x++)
  {
    printf("pop(): %d\n", pop());
  }

  for(int x = 0; x < 2; x++)
  {
    printf("push(%d)\n", x);
    push(x);
  }

  for(int x = 0; x < 3; x++)
  {
    printf("pop(): %d\n", pop());
  }
  
  for(int x = 0; x < 7; x++)
  {
    printf("push(%d)\n", x);
    push(x);
  }

  return 0;
}
