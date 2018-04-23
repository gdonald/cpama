#include <stdbool.h>

#define N 5

typedef struct queue
{
  int contents[N];
} Queue;

void push(Queue *q, int i);
int pop(Queue *q);
int peek_first(Queue *q);
int peek_last(Queue *q);
bool is_empty(Queue *q);
