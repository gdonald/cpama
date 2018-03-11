#include <stdio.h>

#define FLIGHTS 8

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

void find_closest_flight(int desired_time, int *departure, int *arrival)
{
  for(int x = 0; x < FLIGHTS; x++)
  {
    if(x == FLIGHTS - 1 || desired_time <= ((arrivals[x] - departures[x]) / 2) + departures[x])
    {
      *departure = departures[x];
      *arrival = arrivals[x];
      break;
    }
  }
}

int main(void)
{
  int hours, minutes, departure, arrival;
  
  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hours, &minutes);

  find_closest_flight((hours * 60) + minutes, &departure, &arrival);
  
  printf("Closest departure time is %d:%02d%cm, arriving at %d:%02d%cm\n",
	 departure / 60, departure % 60, departure >= (12 * 60) ? 'p' : 'a',
	   arrival / 60,   arrival % 60,   arrival >= (12 * 60) ? 'p' : 'a' );

  return 0;
}
