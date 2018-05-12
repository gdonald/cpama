#include <stdio.h>

int count_ones(unsigned char ch)
{
  return
    (ch >> 0 & 1) +
    (ch >> 1 & 1) +
    (ch >> 2 & 1) +
    (ch >> 3 & 1) +
    (ch >> 4 & 1) +
    (ch >> 5 & 1) +
    (ch >> 6 & 1) +
    (ch >> 7 & 1);
}

int main(void)
{
  unsigned char ch;

  printf("Enter an unsigned char: ");
  scanf("%hhu", &ch);

  printf("Number of 1 bits: %d\n", count_ones(ch));
  
  return 0;
}
