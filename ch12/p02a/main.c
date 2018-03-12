#include <stdio.h>
#include <stdlib.h>

#define N 1024

int main(void)
{
  char a[N], c;
  int x, y, total = 0;
  
  printf("Enter a message: ");

  while((c = getchar()) != '\n' && total < N)
  {
    a[total++] = c;
  }

  for(x = 0, y = total - 1; x < total; x++, --y)
  {
    if(a[x] != a[y])
    {
      printf("Not a palindrome\n");
      exit(EXIT_SUCCESS);
    }
  }

  printf("Palindrome\n");

  return 0;
}
