#include <stdio.h>

int main(void)
{
  int num_days, start_day, day = 1;

  printf("Enter number of days in month: ");
  scanf("%d", &num_days);

  printf("Enter starting day of week (1=Sun, 7=Sat): ");
  scanf("%d", &start_day);

  num_days += start_day - 1;
  
  for(int i = 1; i <= num_days; ++i)
  {
    if(i < start_day)
    {
      printf("   ");
    }
    else
    {
      printf("%2d ", day++);
    }

    if(i % 7 == 0)
    {
      printf("\n");
    }
  }
  
  return 0;
}
