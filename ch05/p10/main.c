#include <stdio.h>

int main(void)
{
  int grade;

  printf("Enter numerical grade (1-100): ");
  scanf("%d", &grade);

  if(grade > 100 || grade < 0)
  {
    printf("grade is out of range\n");
    return 1;
  }

  grade /= 10;

  switch(grade)
  {
  case 10:
  case 9:
    printf("Letter grade: A\n");
    break;
  case 8:
    printf("Letter grade: B\n");
    break;
  case 7:
    printf("Letter grade: C\n");
    break;
  case 6:
    printf("Letter grade: D\n");
    break;
  default:
    printf("Letter grade: F\n");
  }
  
  return 0;
}
