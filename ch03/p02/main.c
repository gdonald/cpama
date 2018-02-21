#include <stdio.h>

int main(void)
{
  int item;
  int month, day, year;
  float price;

  printf("Enter item number: ");
  scanf("%d", &item);

  printf("Enter unit price: ");
  scanf("%f", &price);
  
  printf("Enter purchase date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month, &day, &year);

  printf("\nItem\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n");
  printf("%d\t\t$%7.2f\t%.2d/%.2d/%.4d\n", item, price, month, day, year);
  
  return 0;
}
