#include <stdio.h>

int main(void)
{
  char *str1 = "#989", *str2 = "#24,675", *str3 = "#1,162,620";
  char sales_rank1[20], sales_rank2[20], sales_rank3[20];

  sscanf(str1, "#%s", sales_rank1);
  sscanf(str2, "#%s", sales_rank2);
  sscanf(str3, "#%s", sales_rank3);

  printf("sales_ranks1: %s\n", sales_rank1);
  printf("sales_ranks2: %s\n", sales_rank2);
  printf("sales_ranks3: %s\n", sales_rank3);
  
  return 0;
}
