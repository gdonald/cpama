
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
  top = 0;
}

bool is_empty(void)
{
  return top == 0;
}

bool is_full(void)
{
  return top == STACK_SIZE;
}

void push(int n)
{
  if(is_full())
  {
    stack_overflow();
  }

  contents[top++] = n;
}

int pop(void)
{
  if(is_empty())
  {
    stack_underflow();
  }

  return contents[--top];
}
