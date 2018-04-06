#include <stdio.h>

#define NAME_LEN 32

typedef struct
{
  int number;
  char name[NAME_LEN + 1];
  int on_hand;
} Part;

void print_part(Part *p)
{
  printf("Part number: %d\n", p->number);
  printf("Part name: %s\n", p->name);
  printf("Quantity on hand: %d\n", p->on_hand);
}

int main(void)
{
  Part part = { .number = 123, .name = "Foo", .on_hand = 17 };
  print_part(&part);
  
  return 0;
}
