#include <stdio.h>

int main(void)
{
  int area, prefix, number;

  printf("Enter phone number: [(xxx) xxx-xxxx]: ");
  scanf("%d-%d-%d-%d-%d", &area, &prefix, &number);

  printf("GS1 prefix: %d\n", gs1);
  printf("Group identifier: %d\n", group);
  printf("Publisher code: %d\n", publisher);
  printf("Item number: %d\n", item);
  printf("Check digit: %d\n", check);
  
  return 0;
}
