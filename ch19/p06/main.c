
#include "queueADT.h"

int main(void)
{
  Queue q = create(5);
  
  printf("push(q, 1)\n");
  push(q, 1);

  printf("push(q, 2)\n");
  push(q, 2);

  printf("push(q, 3)\n");
  push(q, 3);

  printf("peek_first(q): %d\n", peek_first(q));
  printf("peek_last(q): %d\n", peek_last(q));

  printf("pop(q): %d\n", pop(q));
  printf("peek_first(q): %d\n", peek_first(q));
  printf("peek_last(q): %d\n", peek_last(q));

  printf("pop(q): %d\n", pop(q));
  printf("peek_first(q): %d\n", peek_first(q));
  printf("peek_last(q): %d\n", peek_last(q));

  printf("pop(q): %d\n", pop(q));
  printf("peek_first(q): %d\n", peek_first(q));
  printf("peek_last(q): %d\n", peek_last(q));

  for(int x = 0; x < 3; x++)
  {
    printf("push(q, %d)\n", x);
    push(q, x);
  }

  for(int x = 0; x < 2; x++)
  {
    printf("pop(q): %d\n", pop(q));
  }

  for(int x = 0; x < 2; x++)
  {
    printf("push(q, %d)\n", x);
    push(q, x);
  }

  for(int x = 0; x < 3; x++)
  {
    printf("pop(q): %d\n", pop(q));
  }
  
  for(int x = 0; x < 7; x++)
  {
    printf("push(q, %d)\n", x);
    push(q, x);
  }

  return 0;
}
