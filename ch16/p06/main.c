#include <stdio.h>

struct date { int y; int m; int d; };

int compare_dates(struct date d1, struct date d2)
{
  int days1 = (d1.y * 365) + (d1.m * 30) + d1.d; 
  int days2 = (d2.y * 365) + (d2.m * 30) + d2.d;

  return (days2 < days1) - (days2 > days1);
}

int main(void)
{
  struct date d1, d2;
  
  printf("Enter first date (mm/dd/yyy): ");
  scanf("%d/%d/%d", &d1.m, &d1.d, &d1.y);
  
  printf("Enter second date (mm/dd/yyy): ");
  scanf("%d/%d/%d", &d2.m, &d2.d, &d2.y);

  char *fmt = "%d/%d/%d is earlier than %d/%d/%d\n";
  
  switch(compare_dates(d1, d2))
  {
  case -1:
    printf(fmt, d1.m, d1.d, d1.y, d2.m, d2.d, d2.y);
    break;
  case 1:
    printf(fmt, d2.m, d2.d, d2.y, d1.m, d1.d, d1.y);
    break;
  default:
    printf("The dates are the same\n");
  }

  return 0;
}
