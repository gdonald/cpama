
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define N 5

struct queue_type
{
  int contents[N];
  int empty;
  int next;
  int count;
};

typedef struct queue_type *Queue;

Queue create();
void destroy(Queue q);
void push(Queue q, int i);
int pop(Queue q);
int peek_first(Queue q);
int peek_last(Queue q);
bool is_empty(Queue q);
bool is_full(Queue q);
void overflow(void);
void underflow(void);
