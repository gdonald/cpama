#include <stdio.h>

int count_ones(unsigned char ch)
{
  int count = 0;

  while(ch)
  {
    printf("ch: %hhu\n", ch);
    
    if(ch & 1) count++;
    ch = ch >> 1;
  }

  return count;
}

int main(void)
{
  unsigned char ch;

  printf("Enter an unsigned char: ");
  scanf("%hhu", &ch);

  printf("Number of 1 bits: %d\n", count_ones(ch));
  
  return 0;
}
