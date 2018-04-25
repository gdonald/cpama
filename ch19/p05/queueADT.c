
#include "queueADT.h"

Queue create()
{
  Queue q = malloc(sizeof(struct queue_type));
  q->empty = 0;
  q->next = 0;
  q->count = 0;
  for(int x = 0; x < N; x++)
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

  if(q->empty == N)
    q->empty = 0;
}

int pop(Queue q)
{
  if(is_empty(q))
    underflow();

  int value = q->contents[q->next++];
  q->count--;

  if(q->next == N)
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
    return q->contents[q->empty == 0 ? N - 1 : q->empty - 1];

  return 0;
}

bool is_empty(Queue q)
{
  return q->count == 0;
}

bool is_full(Queue q)
{
  return q->count >= N;
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
