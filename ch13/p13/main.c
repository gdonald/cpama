#include <stdio.h>

void encrypt(char *message, int shift)
{
  for(; *message; message++)
  {
    if(*message >= 65 && *message <= 90)
    {
      printf("%c", ((*message - 'A') + shift) % 26 + 'A');
    }
    else if(*message >= 97 && *message <= 122)
    {
      printf("%c", ((*message - 'a') + shift) % 26 + 'a');      
    }
    else
    {
      printf("%c", *message);
    }
  }
}

int main(void)
{
  char a[80];
  char n;
  int x = 0, shift;
  
  printf("Enter message to be encrypted: ");

  while((n = getchar()) != '\n')
  {
    a[x++] = n;
  }

  a[x] = '\0';
  
  printf("Enter shift amount (1-25): ");

  scanf("%d", &shift);
  
  printf("Encrypted message: ");

  encrypt(a, shift);

  printf("\n");
  
  return 0;
}
