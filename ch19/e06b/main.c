
#include "stackADT.h"

int main(void)
{
  Stack s1, s2;
  int n;

  s1 = create(100);
  s2 = create(200);

  push(s1, 1);
  push(s1, 2);

  n = pop(s1);
  printf("Popped %d from s1\n", n);
  push(s2, n);
  
  n = pop(s1);
  printf("Popped %d from s1\n", n);

  push(s2, n);
  printf("Peeked %d from s2\n", peek(s2));

  destroy(s1);

  while(!is_empty(s2))
    printf("Popped %d from s2\n", pop(s2));

  push(s2, 3);
  make_empty(s2);
  if(is_empty(s2))
    printf("s2 is empty\n");
  else
    printf("s2 is not empty\n");

  destroy(s2);
  
  return 0;
}
