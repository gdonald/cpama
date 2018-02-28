#include <stdbool.h>
#include <stdio.h>

int main(void)
{
  int digit_seen[10] = {0};
  int digit;
  long n;

  printf("Enter a number: ");
  scanf("%ld", &n);

  while(n > 0)
  {
    digit = n % 10;
    digit_seen[digit]++;

    n /= 10;
  }

  printf("Repeated digit(s): ");

  for(int x = 0; x < 10; x++)
  {
    if(digit_seen[x] > 1)
    {
      printf("%d ", x);
    }
  }

  printf("\n");
  
  return 0;
}
