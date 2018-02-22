#include <stdio.h>

int main(void)
{
  int y, y_e, m, m_e, d, d_e, days, days_e = -1;

  do
  {
    printf("Enter a date (mm/dd/yyy): ");
    scanf("%d/%d/%d", &m, &d, &y);

    days = d + (m * 30) + (y * 365);

    if(days == 0)
    {
      break;
    }
    
    if(days_e == -1 || days < days_e)
    {
      days_e = days;
      y_e = y;
      m_e = m;
      d_e = d;
    }

  } while(days != 0);

  printf("%d/%d/%d is the earliest day\n", m_e, d_e, y_e);
  
  return 0;
}
