#include <stdio.h>

int main(void)
{
  float loan_amount;
  float interest_rate;
  float monthly_payment;
  float monthly_interest_rate;
  int num_payments;

  printf("Enter amount of loan: ");
  scanf("%f", &loan_amount);

  printf("Enter interest rate: ");
  scanf("%f", &interest_rate);

  printf("Enter monthly payment: ");
  scanf("%f", &monthly_payment);

  printf("Enter number of payments: ");
  scanf("%d", &num_payments);
  
  monthly_interest_rate = interest_rate / 100.0f / 12;

  printf("\n");
  
  for(int i = 1; i <= num_payments; i++)
  {
    loan_amount += loan_amount * monthly_interest_rate;
    loan_amount -= monthly_payment;
    printf("Balance remaining after payment #%d: $%.2f\n", i, loan_amount);
  }
  
  return 0;
}
