
#include "queueADT.h"

static void terminate(const char *message)
{
  printf("%s\n", message);
  exit(EXIT_FAILURE);
}

Queue create(int size)
{
  Queue q = malloc(sizeof(struct queue_type));
  if(q == NULL)
    terminate("Error in create: queue cannot be created.");
  q->contents = malloc(size * sizeof(int));
  if(q->contents == NULL)
  {
    free(q);
    terminate("Error in create: queue cannot be created.");
  }
  q->size = size;
  q->empty = 0;
  q->next = 0;
  q->count = 0;
  for(int x = 0; x < size; x++)
    q->contents[x] = 0;
  return q;
}

void destroy(Queue q)
{
  free(q);
}

void push(Queue q, int i)
{
  if(is_full(q))
    overflow();

  q->contents[q->empty++] = i;
  q->count++;

  if(q->empty == q->size)
    q->empty = 0;
}

int pop(Queue q)
{
  if(is_empty(q))
    underflow();

  int value = q->contents[q->next++];
  q->count--;

  if(q->next == q->size)
    q->next = 0;

  return value;
}

int peek_first(Queue q)
{
  return q->contents[q->next];
}

int peek_last(Queue q)
{
  if(q->count > 0)
    return q->contents[q->empty == 0 ? q->size - 1 : q->empty - 1];

  return 0;
}

bool is_empty(Queue q)
{
  return q->count == 0;
}

bool is_full(Queue q)
{
  return q->count >= q->size;
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
