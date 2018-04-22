#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define N 5

struct t
{
  int contents[N];
  int top;
};

typedef struct t *Stack;

extern Stack s;

void make_empty(Stack s);
void push(Stack s, int i);
int pop(Stack s);
bool is_empty(const Stack s);
bool is_full(const Stack s);
