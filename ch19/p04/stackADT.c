
#include "stackADT.h"

static void terminate(const char *message)
{
  printf("%s\n", message);
  exit(EXIT_FAILURE);
}

Stack create(void)
{
  Stack s = malloc(sizeof(struct stack_type));
  if(s == NULL)
    terminate("Error in create: stack could not be created.");
  s->top = NULL;
  return s;
}

void destroy(Stack s)
{
  make_empty(s);
  free(s);
}

void make_empty(Stack s)
{
  while(!is_empty(s))
    pop(s);
}

bool is_empty(Stack s)
{
  return s->top == NULL;
}

bool is_full(void)
{
  return false;
}

void push(Stack s, void *p)
{
  struct node *new = malloc(sizeof(struct node));
  if(new == NULL)
    terminate("Error in push, stack is full.");

  new->data = p;
  new->next = s->top;
  s->top = new;
}

void *pop(Stack s)
{
  if(is_empty(s))
    terminate("Error in pop: stack is empty.");

  struct node *old_top = s->top;
  void *p = old_top->data;
  s->top = old_top->next;
  free(old_top);

  return p;
}

void *peek(Stack s)
{
  if(is_empty(s))
    terminate("Error in peek: stack is empty.");

  return s->top->data;
}
