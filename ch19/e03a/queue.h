#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define N 5

extern int first_empty, next_removed, item_count;
extern int contents[N];

void push(int i);
int pop(void);
int peek_first(void);
int peek_last(void);
bool is_empty(void);
bool is_full(void);
