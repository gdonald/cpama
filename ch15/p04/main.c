
#include "readline.h"

int main(void)
{
  char reminders[MAX_REMIND][MSG_LEN + 3];
  char day_str[13], msg_str[MSG_LEN + 1];
  int month, day, i, j, num_remind = 0, hours, minutes;

  for(;;)
  {
    if(num_remind == MAX_REMIND)
    {
      printf("-- No space left --\n");
      break;
    }

    printf("Enter month/day, 24-hour time, and a reminder: ");
    scanf("%2d/%2d", &month, &day);

    if(month == 0 || day == 0)
    {
      break;
    }

    if(month < 0 || month > 12 || day < 0 || day > 31)
    {
      printf("Error: month/day not in range!\n");
      continue;
    }

    scanf("%d:%d", &hours, &minutes);

    sprintf(day_str, "%2d/%2d %2d:%2d ", month, day, hours, minutes);
    read_line(msg_str, MSG_LEN);
    
    for(i = 0; i < num_remind; i++)
    {
      if(strcmp(day_str, reminders[i]) < 0)
      {
	break;
      }
    }

    for(j = num_remind; j > i; j--)
    {
      strcpy(reminders[j], reminders[j - 1]);
    }

    strcpy(reminders[i], day_str);
    strcat(reminders[i], msg_str);

    num_remind++;
  }
  
  printf("\nDay   Time   Reminder\n");

  for(i = 0; i < num_remind; i++)
  {
    printf("%s\n", reminders[i]);
  }
  
  return 0;
}
