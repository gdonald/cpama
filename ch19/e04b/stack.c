
#include "stack.h"

struct node *list = NULL;

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

void make_empty()
{
  while(list)
    pop();
}

void push(int i)
{
  struct node *new = malloc(sizeof(struct node));

  if(new == NULL)
    overflow();
  
  new->data = i;
  new->next = list;
  list = new;
}

int pop()
{
  if(is_empty())
    underflow();

  int value = list->data;

  struct node *old = list;
  list = list->next;
  free(old);
  
  return value;
}

bool is_empty()
{
  return list == NULL;
}

bool is_full()
{
  return false;
}
