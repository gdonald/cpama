#include <stdio.h>
#include "queue.h"

int main(void)
{
  printf("push(1)\n");
  push(1);

  printf("push(2)\n");
  push(2);
  
  printf("pop(): %d\n", pop());
  printf("pop(): %d\n", pop());

  printf("push(3)\n");
  push(3);

  printf("pop(): %d\n", pop());

  if(!is_empty())
    printf("pop(): %d\n", pop());

  printf("push(4)\n");
  push(4);

  printf("peek_first(): %d\n", peek_first());
  printf("peek_last(): %d\n", peek_last());

  printf("push(5)\n");
  push(5);

  printf("peek_first(): %d\n", peek_first());
  printf("peek_last(): %d\n", peek_last());

  printf("push(6)\n");
  push(6);

  printf("peek_first(): %d\n", peek_first());
  printf("peek_last(): %d\n", peek_last());

  printf("pop(): %d\n", pop());
  printf("pop(): %d\n", pop());
  printf("pop(): %d\n", pop());

  if(!is_empty())
    printf("pop(): %d\n", pop());
  
  return 0;
}
