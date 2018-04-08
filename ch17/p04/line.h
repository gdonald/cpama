#ifndef LINE_H
#define LINE_H

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "word.h"

struct node
{
  char word[MAX_WORD_LEN + 2];
  struct node *next;
};

void clear_line(void);
void add_word(const char *word);
int space_remaining(void);
void write_line(void);
void flush_line(void);

#endif
