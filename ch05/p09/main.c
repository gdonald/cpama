#include <stdio.h>

int main(void)
{
  int y1, y2, m1, m2, d1, d2, days1, days2;
  
  printf("Enter first date (mm/dd/yyy): ");
  scanf("%d/%d/%d", &m1, &d1, &y1);
  
  printf("Enter second date (mm/dd/yyy): ");
  scanf("%d/%d/%d", &m2, &d2, &y2);

  days1 = d1 + (m1 * 30) + (y1 * 365);
  days2 = d2 + (m2 * 30) + (y2 * 365);

  if(days1 < days2)
  {
    printf("%d/%d/%d is earlier than %d/%d/%d\n", m1, d1, y1, m2, d2, y2);
  }
  else
  {
    printf("%d/%d/%d is earlier than %d/%d/%d\n", m2, d2, y2, m1, d1, y1);
  }

  return 0;
}
