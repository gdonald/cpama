#include <stdio.h>

#define FLIGHTS 8

int main(void)
{
  int hours, minutes, total;

  int departures[FLIGHTS] = { ( 8 * 60) +  0,
			      ( 9 * 60) + 43,
			      (11 * 60) + 19,
			      (12 * 60) + 47,
			      (14 * 60) +  0,
			      (15 * 60) + 45,
			      (19 * 60) +  0,
			      (21 * 60) + 45 };

  int arrivals[FLIGHTS] = { (10 * 60) + 16,
			    (11 * 60) + 52,
			    (13 * 60) + 31,
			    (15 * 60) +  0,
			    (16 * 60) +  8,
			    (17 * 60) + 55,
			    (17 * 60) + 20,
			    (23 * 60) + 58 };

  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hours, &minutes);

  total = (hours * 60) + minutes;

  for(int x = 0; x < FLIGHTS; x++)
  {
    if(x == FLIGHTS - 1 || total <= ((arrivals[x] - departures[x]) / 2) + departures[x])
    {
      printf("Closest departure time is %d:%02d%cm, arriving at %d:%02d%cm\n",
	     departures[x] / 60, departures[x] % 60, departures[x] >= (12 * 60) ? 'p' : 'a',
	       arrivals[x] / 60,   arrivals[x] % 60,   arrivals[x] >= (12 * 60) ? 'p' : 'a'
	);
      break;
    }
  }
  
  return 0;
}
