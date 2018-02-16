#include <stdio.h>

int main(void)
{
  float amount;

  printf("Enter an amount: ");
  scanf("%f", &amount);
  
  float with_taxes = amount + (amount * 0.05f);

  printf("With tax added: $%.2f\n", with_taxes);
  
  return 0;
}
