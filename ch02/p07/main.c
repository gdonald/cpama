#include <stdio.h>

int main(void)
{
  int amount;

  printf("Enter a dollar amount: ");
  scanf("%d", &amount);

  printf("$20 bills: %d\n", amount / 20);
  amount %= 20;

  printf("$10 bills: %d\n", amount / 10);
  amount %= 10;

  printf(" $5 bills: %d\n", amount / 5);
  amount %= 5;

  printf(" $1 bills: %d\n", amount);

  return 0;
}
