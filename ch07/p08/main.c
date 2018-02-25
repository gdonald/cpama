#include <ctype.h>
#include <stdio.h>

int main(void)
{
  int hours, minutes, total, d1, d2, d3, d4, d5, d6, d7;
  char ampm;

  printf("Enter a 12-hour time (hh:mm [a|p]m): ");
  scanf("%d:%d %c", &hours, &minutes, &ampm);

  switch(toupper(ampm))
  {
  case 'P':
    hours += 12;
    break;
  }
  
  total = (hours * 60) + minutes;

  // Calculate midpoints between departures times
  // current departure + ((next departure - current departure) / 2)
  d1 = (( 8 * 60) +  0) + (((( 9 * 60) + 43) - (( 8 * 60) +  0)) / 2);
  d2 = (( 9 * 60) + 43) + ((((11 * 60) + 19) - (( 9 * 60) + 43)) / 2);
  d3 = ((11 * 60) + 19) + ((((12 * 60) + 47) - ((11 * 60) + 19)) / 2);
  d4 = ((12 * 60) + 47) + ((((14 * 60) +  0) - ((12 * 60) + 47)) / 2);
  d5 = ((14 * 60) +  0) + ((((15 * 60) + 45) - ((14 * 60) +  0)) / 2);
  d6 = ((15 * 60) + 45) + ((((19 * 60) +  0) - ((15 * 60) + 45)) / 2);
  d7 = ((19 * 60) +  0) + ((((21 * 60) + 45) - ((19 * 60) +  0)) / 2);

  if(total <= d1)
  {
    printf("Closest departure time is 8:00am, arriving at 10:16am\n");
  }
  else if(total <= d2)
  {
    printf("Closest departure time is 9:43am, arriving at 11:52am\n");
  }
  else if(total <= d3)
  {
    printf("Closest departure time is 11:19am, arriving at 1:31pm\n");
  }
  else if(total <= d4)
  {
    printf("Closest departure time is 12:47pm, arriving at 3:00pm\n");
  }
  else if(total <= d5)
  {
    printf("Closest departure time is 2:00pm, arriving at 4:08pm\n");
  }
  else if(total <= d6)
  {
    printf("Closest departure time is 3:45pm, arriving at 5:55pm\n");
  }
  else if(total <= d7)
  {
    printf("Closest departure time is 7:00pm, arriving at 9:20pm\n");
  }
  else
  {
    printf("Closest departure time is 9:45pm, arriving at 11:58pm\n");
  }

  return 0;
}
