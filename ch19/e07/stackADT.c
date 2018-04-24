
#include "stackADT.h"

static void terminate(const char *message)
{
  printf("%s\n", message);
  exit(EXIT_FAILURE);
}

Stack create(int size)
{
  Stack s = malloc(sizeof(struct stack_type));
  if(s == NULL)
    terminate("Error in create: stack could not be created.");
  s->contents = malloc(size * sizeof(Item));
  if(s->contents == NULL)
  {
    free(s);
    terminate("Error in create: stack contents could not be created.");    
  }
  s->top = 0;
  s->size = size;
  return s;
}

void destroy(Stack s)
{
  free(s->contents);
  free(s);
}

void make_empty(Stack s)
{
  s->top = 0;
}

bool is_empty(Stack s)
{
  return s->top == 0;
}

bool is_full(Stack s)
{
  return s->top == s->size;
}

void push(Stack s, int i)
{
  if(is_full(s))
  {
    printf("increasing stack contents size\n");
    
    s->size *= 2;

    Item *contents = malloc(s->size * sizeof(Item));
    if(contents == NULL)
    {
      destroy(s);
      terminate("Error in create: stack contents size could not be increased.");    
    }

    Item *old_contents = s->contents;

    for(int x = 0; x < s->top; x++)
    {
      contents[x] = s->contents[x];
    }

    s->contents = contents;
    free(old_contents);
  }

  s->contents[s->top++] = i;
}

int pop(Stack s)
{
  if(is_empty(s))
    terminate("Error in pop: stack is empty.");
  return s->contents[--s->top];
}

int peek(Stack s)
{
  if(is_empty(s))
    terminate("Error in peek: stack is empty.");
  return s->contents[s->top - 1];
}
