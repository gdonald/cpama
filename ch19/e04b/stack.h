#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *next;
};

void make_empty();
void push(int i);
int pop();
bool is_empty();
bool is_full();
