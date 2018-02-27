#include <stdio.h>

int main(void)
{
  char op;
  float total, n;

  printf("Enter an expression: ");
  scanf("%f", &total);

  while((op = getchar()) != '\n')
  {
    switch(op)
    {
    case '+':
      scanf("%f", &n);
      total += n;
      break;
    case '-':
      scanf("%f", &n);
      total -= n;
      break;
    case '*':
      scanf("%f", &n);
      total *= n;
      break;
    case '/':
      scanf("%f", &n);
      total /= n;
      break;
    }
  }

  printf("Value of expression: %g\n", total);
  
  return 0;
}
