
#include "stack.h"

void overflow(void)
{
  printf("stack overflow\n");
  exit(EXIT_FAILURE);
}

void underflow(void)
{
  printf("stack underflow\n");
  exit(EXIT_FAILURE);
}

void make_empty(Stack s)
{
  s->top = 0;
}

void push(Stack s, int i)
{
  if(is_full(s))
  {
    overflow();
    return;
  }

  s->contents[s->top++] = i;
}

int pop(Stack s)
{
  if(is_empty(s))
  {
    underflow();
  }

  int value = s->contents[--s->top];
  return value;
}

bool is_empty(Stack s)
{
  return s->top == 0;
}

bool is_full(Stack s)
{
  return s->top == N - 1;
}
