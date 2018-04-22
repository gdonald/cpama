#include <stdio.h>
#include "queue.h"

int main(void)
{
  printf("push(1)\n");
  push(1);

  printf("push(2)\n");
  push(2);

  printf("push(3)\n");
  push(3);

  printf("peek_first(): %d\n", peek_first());
  printf("peek_last(): %d\n", peek_last());

  printf("pop(): %d\n", pop());
  printf("peek_first(): %d\n", peek_first());
  printf("peek_last(): %d\n", peek_last());

  printf("pop(): %d\n", pop());
  printf("peek_first(): %d\n", peek_first());
  printf("peek_last(): %d\n", peek_last());

  printf("pop(): %d\n", pop());
  printf("peek_first(): %d\n", peek_first());
  printf("peek_last(): %d\n", peek_last());

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
  
  for(int x = 0; x < N + 2; x++)
  {
    printf("push(%d)\n", x);
    push(x);
  }
  
  return 0;
}
