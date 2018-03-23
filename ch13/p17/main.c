#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define N 1024

bool is_palindrome(const char *message)
{
  char a[N];
  char *p = a, *q, c;

  for(; *message; message++)
  {
    c = tolower(*message);

    if(c >= 'a' && c <= 'z')
    {
      *p++ = c;
    }    
  }

  q = a;

  while(p-- > a)
  {
    if(*p != *q++)
    {
      return false;
    }
  }

  return true;
}

int main(void)
{
  char a[N];
  
  printf("Enter a message: ");
  fgets(a, sizeof(a), stdin);

  if(is_palindrome(a))
  {
    printf("Palindrome\n");  
  }
  else
  {
    printf("Not a palindrome\n");
  }

  return 0;
}
