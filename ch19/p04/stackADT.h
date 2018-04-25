#ifndef STACKADT_H
#define STACKADT_H

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

struct node
{
  void *data;
  struct node *next;
};

struct stack_type
{
  struct node *top;
};

typedef struct stack_type *Stack;

Stack create(void);
void destroy(Stack s);
void make_empty(Stack s);
bool is_empty(Stack s);
bool is_full(void);
void push(Stack s, void *p);
void *pop(Stack s);
void *peek(Stack s);

#endif
