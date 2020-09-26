#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

int roll_dice(void)
{
  return ((rand() % 6) + 1) + ((rand() % 6) + 1);
}

bool play_game(void)
{
  int roll = roll_dice();
  printf("You rolled: %d\n", roll);
  
  switch(roll)
  {
  case 7:
  case 11:
    return true;
  case 2:
  case 3:
  case 12:
    return false;
  }

  int point = roll;
  printf("Your point is: %d\n", point);

  while(true)
  {
    printf("You rolled: %d\n", roll = roll_dice());

    if(roll == point)
    {
      return true;
    }
    
    if(roll == 7)
    {
      return false;
    }
  }
}

int main(void)
{
  char play;
  int wins = 0, loses = 0;

  struct timeval time;
  gettimeofday(&time, NULL);
  srand((time.tv_sec * 1000) + (time.tv_usec / 1000));
  
  do
  {
    if(play_game())
    {
      wins++;
      printf("You win!\n");
    }
    else
    {
      loses++;
      printf("You lose!\n");
    }

    printf("\nPlay again? ");
    scanf(" %c", &play);

  } while(tolower(play) == 'y'); 
  
  printf("\nWins: %d  Loses: %d\n", wins, loses);
  
  return 0;
}
