#include <stdio.h>

int main(void)
{
  struct dialing_code
  {
    char *country;
    int code;
  };
  
  const struct dialing_code country_codes[] = {
    {"Argentina",            54},
    {"Bangladesh",          880},
    {"Brazil",               55},
    {"Burma (Myanmar)",      95},
    {"China",                86},
    {"Columbia",             57},
    {"Congo, Dem. Rep. of", 243},
    {"Egypt",                20},
    {"Ethiopia",            251},
    {"France",               33},
    {"Germany",              49},
    {"India",                91},
    {"Indonesia",            62},
    {"Iran",                 98},
    {"Italy",                39},
    {"Japan",                81},
    {"Mexico",               52},
    {"Nigeria",             234},
    {"Pakistan",             92},
    {"Phillipines",          63},
    {"Poland",               48},
    {"Russia",                7},
    {"South Africa",         27},
    {"South Korea",          82},
    {"Spain",                34},
    {"Sudan",               249},
    {"Thailand",             66},
    {"Turkey",               90},
    {"Ukraine",             380},
    {"United Kingdom",       44},
    {"United States",         1},
    {"Vietname",             84},
  };

  int code, x;
  int total_codes = sizeof(country_codes) / sizeof(country_codes[0]);
  
  printf("Enter an international dialing code: ");
  scanf("%d", &code);

  for(x = 0; x < total_codes; x++)
  {
    if(country_codes[x].code == code)
    {
      printf("Country: %s\n", country_codes[x].country);
      break;
    }
  }

  if(x == total_codes)
  {
    printf("Country not found\n");
  }
  
  return 0;
}
