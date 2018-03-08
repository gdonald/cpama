#include <stdio.h>

float income_tax(float income)
{
  float tax;
  
  if(income <= 750)
  {
    tax = income * 0.01f;
  }
  else if(income < 2250)
  {
    tax = 7.5f + (income * 0.02f);
  }
  else if(income < 3750)
  {
    tax = 37.5f + (income * 0.03f);
  }
  else if(income < 5250)
  {
    tax = 82.5f + (income * 0.04f);
  }
  else if(income < 7000)
  {
    tax = 142.5f + (income * 0.05f);
  } 
  else
  {
    tax = 230 + (income * 0.06f);
  }

  return tax;
}

int main(void)
{
  float income;

  printf("Enter taxable income: ");
  scanf("%f", &income);

  printf("The tax due is: %.2f\n", income_tax(income));

  return 0;
}
