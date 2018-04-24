#ifndef STACKADT_H
#define STACKADT_H

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef int Item;

struct node
{
  Item data;
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
void push(Stack s, Item i);
Item pop(Stack s);
Item peek(Stack s);

#endif
