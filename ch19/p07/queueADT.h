
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *next;
};

extern struct node *first;
extern struct node *last;

void push(int i);
int pop(void);
int peek_first(void);
int peek_last(void);
bool is_empty(void);
bool is_full(void);
