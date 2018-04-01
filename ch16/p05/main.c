#include <stdio.h>
#include <string.h>

#define N 8

struct s { int d; int a; } times[N] = {
  {  8 * 60 +  0,  10 * 60 + 16 },
  {  9 * 60 + 43,  11 * 60 + 52 },
  { 11 * 60 + 19,  13 * 60 + 31 },
  { 12 * 60 + 47,  15 * 60 +  0 },
  { 14 * 60 +  0,  16 * 60 +  8 },
  { 15 * 60 + 45,  19 * 60 + 55 },
  { 19 * 60 +  0,  21 * 60 + 20 },
  { 21 * 60 + 45,  23 * 60 + 58 },
};

void f(int since_midnight, int *hour, int *mins, char *ampm)
{
  *hour = since_midnight / 60;
  *mins = since_midnight % 60;

  strncpy(ampm, *hour < 12 ? "am" : "pm", 2);
  ampm[2] = '\0';

  if(*hour > 12) *hour -= 12;
}

int main(void)
{
  int hours, minutes, total, d, closest = 0;

  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hours, &minutes);

  total = (hours * 60) + minutes;

  for(int x = 0; x < N; x++)
  {
    if(x == 0 && total <= times[x].d)
    {
      closest = 0;
      break;
    }

    if(x >= N)
    {
      closest = x;
      break;
    }

    d = times[x].d + ((times[x + 1].d - times[x].d) / 2);

    if(total <= d)
    {
      closest = x;
      break;
    }
  }

  int h, m;
  char ampm[3];

  f(times[closest].d, &h, &m, ampm);
  printf("Closest departure time is %d:%02d%s", h, m, ampm);

  f(times[closest].a, &h, &m, ampm);
  printf(", arriving at %d:%02d%s\n", h, m, ampm);

  return 0;
}
