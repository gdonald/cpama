
#include "queue.h"

int empty = 0, next = 0, count = 0;
int contents[N] = { 0 };

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

void push(int i)
{
  if(is_full())
  {
    overflow();
    return;
  }

  contents[empty++] = i;
  count++;

  if(empty == N)
    empty = 0;
}

int pop(void)
{
  if(is_empty())
  {
    underflow();
  }

  int value = contents[next++];
  count--;

  if(next == N)
    next = 0;
  
  return value;
}

int peek_first(void)
{
  return contents[next];
}

int peek_last(void)
{
  if(count > 0)
    return contents[empty == 0 ? N - 1 : empty - 1];

  return 0;
}

bool is_empty(void)
{
  return count == 0;
}

bool is_full(void)
{
  return count >= N;
}
