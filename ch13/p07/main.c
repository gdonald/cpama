#include <stdio.h>

int main(void)
{
  int n1, n2;

  char *teens[] = { "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eightteen", "nineteen" };
  char *tens[] = { "", "", "twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety" };
  char *ones[] = { "", "-one", "-two", "-three", "-four", "-five", "-six", "-seven", "-eight", "-nine" };

  printf("Enter a two-digit number: ");
  scanf("%1d%1d", &n1, &n2);

  printf("You entered the number ");

  if(n1 == 1)
  {
    printf("%s", teens[n2]);
  }
  else
  {
    printf("%s", tens[n1]);
    printf("%s", ones[n2]);
  }

  printf("\n");

  return 0;
}
