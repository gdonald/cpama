#include <stdio.h>
#include <stdlib.h>

int *create_array(int n, int initial_value)
{
  int *p = malloc(n * sizeof(int));

  if(p == NULL)
  {
    printf("Unable to allocate memory\n");
    exit(EXIT_FAILURE);
  }

  for(int x = 0; x < n; x++)
  {
    p[x] = initial_value;
  }

  return p;
}

int main(void)
{
  int n, v, *p;

  printf("Enter number of integers and initial value: ");
  scanf("%d %d", &n, &v);

  p = create_array(n, v);
  
  for(int x = 0; x < n; x++)
  {
    printf("%d ", *(p + x));
  }

  printf("\n");
  
  return 0;
}
