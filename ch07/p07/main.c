#include <stdio.h>

int main(void)
{
  int n1, n2, d1, d2, rn, rd;
  char op;

  printf("Enter two fractions separated by an operation sign: ");
  scanf("%d/%d%c%d/%d", &n1, &d1, &op, &n2, &d2);

  switch(op)
  {
  case '+':
    rn = n1 * d2 + n2 * d1;
    rd = d1 * d2;
    break;
  case '-':
    rn = n1 * d2 - n2 * d1;
    rd = d1 * d2;
    break;
  case '*':
    rn = n1 * n2;
    rd = d1 * d2;
    break;
  case '/':
    rn = n1 * d2;
    rd = d1 * n2;
    break;
  }

  printf("The result is %d/%d\n", rn, rd);
  
  return 0;
}
