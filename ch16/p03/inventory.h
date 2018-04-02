#ifndef INVENTORY_H
#define INVENTORY_H

#define NAME_LEN 25
#define MAX_PARTS 100

struct part
{
  int number;
  char name[NAME_LEN + 1];
  int on_hand;
};

int find_part(int number, struct part *inventory, int *num_parts);
void insert(struct part *inventory, int *num_parts);
void search(struct part *inventory, int *num_parts);
void update(struct part *inventory, int *num_parts);
void print(struct part *inventory, int *num_parts);

#endif
