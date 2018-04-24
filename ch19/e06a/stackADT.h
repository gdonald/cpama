#ifndef STACKADT_H
#define STACKADT_H

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

struct stack_type
{
  int contents[STACK_SIZE];
  int top;
};

typedef struct stack_type *Stack;

Stack create(void);
void destroy(Stack s);
void make_empty(Stack s);
bool is_empty(Stack s);
bool is_full(Stack s);
void push(Stack s, int i);
int pop(Stack s);
int peek(Stack s);

#endif
