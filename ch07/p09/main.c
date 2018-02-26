#include <ctype.h>
#include <stdio.h>

int main(void)
{
  int hours, minutes;
  char ampm;

  printf("Enter a 12-hour time: ");
  scanf("%d:%d %c", &hours, &minutes, &ampm);

  switch(toupper(ampm))
  {
  case 'P':
    hours += 12;
    break;
  }
  
  printf("Equivalent 24 hour time: %d:%2d\n", hours, minutes);
 
  return 0;
}
