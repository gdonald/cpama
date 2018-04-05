
#include "stack.h"

void stack_overflow(void)
{
  printf("Expression is too complex\n");
  exit(EXIT_FAILURE);
}

void stack_underflow(void)
{
  printf("Not enough operands\n");
  exit(EXIT_FAILURE);
}

void make_empty(void)
{
  struct node *p;

  while(top != NULL)
  {
    p = top;
    top = top->next;
    free(p);
  }
}

bool is_empty(void)
{
  return top == NULL;
}

bool push(int n)
{
  struct node *new;
  new = malloc(sizeof(*new));

  if(new == NULL)
  {
    stack_overflow();
  }

  new->value = n;
  new->next = top;
  top = new;
  
  return true;
}

int pop(void)
{
  if(is_empty())
  {
    stack_underflow();
  }

  struct node *p;
  int n = top->value;
  p = top;
  top = top->next;
  free(p);
  
  return n;
}
