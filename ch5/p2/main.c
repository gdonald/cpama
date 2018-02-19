#include <stdio.h>

int main(void)
{
  int hours, new_hours, minutes;

  printf("Enter a 24 hour time: ");
  scanf("%d:%d", &hours, &minutes);

  new_hours = hours;
  
  if(new_hours > 11)
  {
    new_hours -= 12;
  }

  if(new_hours == 0)
  {
    new_hours = 12;
  }

  printf("Equivalent 12-hour time: %d:%02d ", new_hours, minutes);
  printf(hours > 11 ? "PM" : "AM");
  printf("\n");
  
  return 0;
}
