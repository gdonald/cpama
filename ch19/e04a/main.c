#include <stdio.h>
#include "stack.h"

int main(void)
{
  Stack s = malloc(sizeof(s));
  
  printf("push(s, 1)\n");
  push(s, 1);

  printf("push(s, 2)\n");
  push(s, 2);

  printf("push(s, 3)\n");
  push(s, 3);

  printf("pop(s): %d\n", pop(s));
  printf("pop(s): %d\n", pop(s));
  printf("pop(s): %d\n", pop(s));

  for(int x = 0; x < 3; x++)
  {
    printf("push(s, %d)\n", x);
    push(s, x);
  }

  for(int x = 0; x < 2; x++)
  {
    printf("pop(s): %d\n", pop(s));
  }

  for(int x = 0; x < 2; x++)
  {
    printf("push(s, %d)\n", x);
    push(s, x);
  }

  for(int x = 0; x < 3; x++)
  {
    printf("pop(s): %d\n", pop(s));
  }
  
  for(int x = 0; x < N + 2; x++)
  {
    printf("push(s, %d)\n", x);
    push(s, x);
  }

  free(s);
  
  return 0;
}
