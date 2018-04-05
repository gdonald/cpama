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

void delete_from_list(struct node **list, int n)
{
  struct node *p = *list;

  for(;;)
  {
    if(p->value == n)
    {
      *list = p->next;
      free(p);
      break;
    }

    list = &p->next;
    p = p->next;
  }
}

int main(void)
{
  struct node *first = NULL, *p;

  first = add_to_list(first, 1);
  first = add_to_list(first, 2);
  first = add_to_list(first, 3);
  first = add_to_list(first, 4);
  first = add_to_list(first, 5);

  printf("before:\n");
  p = first;
  while(p)
  {
    printf("%d ", p->value);
    p = p->next;
  }

  printf("\n\n");

  delete_from_list(&first, 1);
  delete_from_list(&first, 5);
  delete_from_list(&first, 3);

  printf("after:\n");
  p = first;
  while(p)
  {
    printf("%d ", p->value);
    p = p->next;
  }

  printf("\n");

  // valgrind
  delete_from_list(&first, 2);
  delete_from_list(&first, 4);
  
  return 0;
}
