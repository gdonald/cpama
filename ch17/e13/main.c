#include <stdio.h>
#include <stdlib.h>

struct node
{
  int value;
  struct node *next;
};

void print_list(struct node *list)
{
  struct node *p = NULL;

  printf("list: ");
  
  p = list;
  while(p)
  {
    printf("%d ", p->value);
    p = p->next;
  }

  printf("\n");
}

struct node *insert_into_ordered_list(struct node *list, struct node *new_node)
{
  struct node *cur = list, *prev = NULL;

  // empty list
  if(cur == NULL)
  {
    return new_node;
  }

  // find where to put
  while(cur != NULL && cur->value <= new_node->value)
  {
    prev = cur;
    cur = cur->next;
  }

  // insert at beginning
  if(prev == NULL)
  {
    list = new_node;
    new_node->next = cur;
  }
  // insert at middle or end
  else
  {
    prev->next = new_node;
    new_node->next = cur;
  }
  
  return list;
}

int main(void)
{
  struct node *first = NULL, *p, *new;
  int a[4] = { 3, 1, 2, 4 };

  for(int x = 0; x < 4; x++)
  {
    new = malloc(sizeof(struct node));
    if(new == NULL)
    {
      printf("Error: malloc failed to create new\n");
      exit(EXIT_FAILURE);
    }
    new->value = a[x];
    first = insert_into_ordered_list(first, new);

    print_list(first);
  }
  
  while(first != NULL)
  {
    p = first;
    first = first->next;
    free(p);
  }

  return 0;
}
