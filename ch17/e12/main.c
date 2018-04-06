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

struct node *find_last(struct node *list, int n)
{
  struct node *p, *last = NULL;
  
  p = list;
  while(p)
  {
    if(p->value == n)
    {
      last = p;
    }
    
    p = p->next;
  }

  return last;
}

int main(void)
{
  struct node *first = NULL, *p;

  first = add_to_list(first, 1);
  first = add_to_list(first, 2);
  first = add_to_list(first, 2);
  first = add_to_list(first, 3);

  p = first;
  while(p)
  {
    printf("%d ", p->value);
    p = p->next;
  }

  printf("\n\n");

  printf("last 2: %d\n", find_last(first, 2)->value);

  while(first != NULL)
  {
    p = first;
    first = first->next;
    free(p);
  }
  
  printf("\n");

  return 0;
}
