
#include "queueADT.h"

struct node *first = NULL;
struct node *last = NULL;

static void terminate(const char *message)
{
  printf("%s\n", message);
  exit(EXIT_FAILURE);
}

void push(int i)
{
  struct node *new = malloc(sizeof(struct node));

  if(new == NULL)
    terminate("Error in push: queue is full.");

  new->data = i;

  if(is_empty())
  {
    last = new;
    first = new;
  }
  else
  {
    struct node *old_last = last;
    last = new;
    old_last->next = last;
  }
}

int pop(void)
{
  if(is_empty())
    terminate("Error in pop: queue is empty.");

  struct node *old_first = first;
  int data = first->data;

  first = first->next;
  free(old_first);

  return data;
}

int peek_first(void)
{
  if(is_empty())
    terminate("Error in peek_first: queue is empty.");

  return first->data;
}

int peek_last(void)
{
  if(is_empty())
    terminate("Error in peek_last: queue is empty.");

  return last->data;
}

bool is_empty(void)
{
  return first == NULL;
}

bool is_full(void)
{
  return false;
}

void overflow(void)
{
  printf("queue overflow\n");
  exit(EXIT_FAILURE);
}

void underflow(void)
{
  printf("queue underflow\n");
  exit(EXIT_FAILURE);
}
