#include <stdio.h>

#define MAX_DIGITS 10

const int segments[10][7] = {
  { 1, 1, 1, 1, 1, 1 },
  { 0, 1, 1 },
  { 1, 1, 0, 1, 1, 0, 1 },
  { 1, 1, 1, 1, 0, 0, 1 },
  { 0, 1, 1, 0, 0, 1, 1 },
  { 1, 0, 1, 1, 0, 1, 1 },
  { 1, 0, 1, 1, 1, 1, 1 },
  { 1, 1, 1 },
  { 1, 1, 1, 1, 1, 1, 1 },
  { 1, 1, 1, 1, 0, 1, 1 }
};

char digits[3][MAX_DIGITS * 4];

void clear_digits_array(void)
{
  for(int r = 0; r < 3; r++)
  {
    for(int c = 0; c < MAX_DIGITS * 4; c++)
    {
      digits[r][c] = ' ';
    }
  }
}

void process_digit(int digit, int position)
{
  int col = (position * 4) + 1;

  digits[0][col + 1] = segments[digit][0] ? '_' : ' ';

  digits[1][col + 0] = segments[digit][5] ? '|' : ' ';
  digits[1][col + 1] = segments[digit][6] ? '_' : ' ';
  digits[1][col + 2] = segments[digit][1] ? '|' : ' ';

  digits[2][col + 0] = segments[digit][4] ? '|' : ' ';
  digits[2][col + 1] = segments[digit][3] ? '_' : ' ';
  digits[2][col + 2] = segments[digit][2] ? '|' : ' ';
}

void print_digits_array(void)
{
  for(int r = 0; r < 3; r++)
  {
    for(int c = 0; c < MAX_DIGITS * 4; c++)
    {
      printf("%c", digits[r][c]);
    }

    printf("\n");
  }

  printf("\n");
}

int main(void)
{
  char c;
  int x = 0, digit;

  clear_digits_array();
  
  printf("Enter a number: ");

  for(;;)
  {
    scanf("%c", &c);

    if(c == '\n')
    {
      break;
    }

    digit = c - '0';
    
    if(digit >= 0 && digit <= 9)
    {
      process_digit(digit, x++);
    }
    
    if(x == MAX_DIGITS)
    {
      break;
    }
  }

  print_digits_array();

  return 0;
}
