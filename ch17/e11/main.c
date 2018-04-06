#include <stdio.h>
#include <stdlib.h>

struct node
{
  int value;
  struct node *next;
};

struct node *add_to_list(struct node *list, int n)
{
  struct node *new_node;
  new_node = malloc(sizeof(struct node));

  if(new_node == NULL)
  {
    printf("Error: malloc failed in add_to_list\n");
    exit(EXIT_FAILURE);
  }

  new_node->value = n;
  new_node->next = list;
  return new_node;
}

int count_occurances(struct node *list, int n)
{
  int count = 0;
  struct node *p = list;

  p = list;
  while(p)
  {
    if(p->value == n) count++;
    p = p->next;
  }
  
  return count;
}

int main(void)
{
  struct node *first = NULL, *p;
  int x, y;

  for(x = 1; x <= 3; x++)
    for(y = 0; y < x; y++)
      first = add_to_list(first, x);

  for(x = 1; x <= 3; x++)
    printf("%d: %d\n", x, count_occurances(first, x));

  while(first != NULL)
  {
    p = first;
    first = first->next;
    free(p);
  }
  
  return 0;
}
