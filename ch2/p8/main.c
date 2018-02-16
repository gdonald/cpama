#include <stdio.h>

int main(void)
{
  float loan_amount;
  float interest_rate;
  float monthly_payment;
  float monthly_interest_rate;

  printf("Enter amount of loan: ");
  scanf("%f", &loan_amount);

  printf("Enter interest rate: ");
  scanf("%f", &interest_rate);

  printf("Enter monthly payment: ");
  scanf("%f", &monthly_payment);
 
  monthly_interest_rate = interest_rate / 100.0f / 12;

  loan_amount += loan_amount * monthly_interest_rate;
  loan_amount -= monthly_payment;
  printf("\nBalance remaining after 1st payment: $%.2f\n", loan_amount);

  loan_amount += loan_amount * monthly_interest_rate;
  loan_amount -= monthly_payment;
  printf("Balance remaining after 2nd payment: $%.2f\n", loan_amount);

  loan_amount += loan_amount * monthly_interest_rate;
  loan_amount -= monthly_payment;
  printf("Balance remaining after 3rd payment: $%.2f\n", loan_amount);

  return 0;
}
