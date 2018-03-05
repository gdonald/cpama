#include <stdio.h>

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
  
  printf("Enter shift amount (1-25): ");

  scanf("%d", &shift);
  
  printf("Encrypted message: ");

  for(int i = 0; i < x; i++)
  {
    if(a[i] >= 65 && a[i] <= 90)
    {
      printf("%c", ((a[i] - 'A') + shift) % 26 + 'A');
    }
    else if(a[i] >= 97 && a[i] <= 122)
    {
      printf("%c", ((a[i] - 'a') + shift) % 26 + 'a');      
    }
    else
    {
      printf("%c", a[i]);
    }
  }

  printf("\n");
  
  return 0;
}
