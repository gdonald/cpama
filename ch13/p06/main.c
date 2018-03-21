#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define MAX_LEN 10
#define NUM_PLANETS 9

void lower(char *s)
{
  for(; *s; s++)
  {
    *s = tolower((unsigned char)*s);
  }
}

int main(int argc, char **argv)
{
  char planet[MAX_LEN];
  char *planets[] = { "mercury", "venus", "earth", "mars", "jupiter", "saturn", "uranus", "neptune", "pluto" };
  int i, j;
  
  for(i = 1; i < argc; i++)
  {
    strcpy(planet, argv[i]);
    lower(planet);

    for(j = 0; j < NUM_PLANETS; j++)
    {
      if(strcmp(planet, planets[j]) == 0)
      {
	printf("%s is planet %d\n", argv[i], j + 1);
	break;
      }
    }

    if(j == NUM_PLANETS)
    {
      printf("%s is not a planet\n", argv[i]);
    }
  }

  return 0;
}
