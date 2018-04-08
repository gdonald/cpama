
#include "line.h"

#define MAX_LINE_LEN 72

extern struct node *line;
int line_len = 0, num_words = 0;
bool more_space = true;

void clear_line(void)
{
  struct node *p;

  while(line)
  {
    p = line;
    line = line->next;
    free(p);
  }

  line_len = 0;
  num_words = 0;
}

void add_word(const char *word)
{
  struct node *new = malloc(sizeof(struct node) + strlen(word));

  if(new == NULL)
  {
    printf("malloc failed in add_word\n");
    exit(EXIT_FAILURE);
  }

  strcpy(new->word, word);
  new->next = NULL;

  struct node **p = &line;

  while(*p)
  {
    p = &(*p)->next;
  }
  *p = new;

  line_len += strlen(word);

  if(num_words)
  {
    line_len++;
  }

  num_words++;
}

int space_remaining(void)
{
  return MAX_LINE_LEN - line_len;
}

void write_line(void)
{
  int extra_spaces = space_remaining(), spaces_to_insert, i = 0, j;
  struct node *p = line;

  while(p && i < line_len)
  {
    printf("%s", p->word);

    if(num_words > 1)
    {
      spaces_to_insert = extra_spaces / (num_words - 1);
      spaces_to_insert += more_space && extra_spaces > 1 ? 1 : 0;
      more_space = !more_space;
 
      for(j = 1; j <= spaces_to_insert + 1; j++)
      {
	putchar(' ');
      }

      extra_spaces -= spaces_to_insert;
    }

    i += strlen(p->word) + spaces_to_insert;
    num_words--;
    p = p->next;
  }

  putchar('\n');  
}

void flush_line(void)
{
  struct node *p = line;
  
  if(line_len)
  {
    while(p)
    {
      printf("%s", p->word);

      if(p->next != NULL)
      {
	printf(" ");
      }
      
      p = p->next;
    }
  }

  printf("\n");
}
