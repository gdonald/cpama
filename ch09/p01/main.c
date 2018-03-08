#include <stdio.h>

#define MAX 10

void selection_sort(int a[], int n)
{
  if(n == 0)
  {
    return;
  }

  int largest = 0, index = 0, tmp;

  for(int x = 0; x < n; x++)
  {
    if(a[x] > largest)
    {
      largest = a[x];
      index = x;
    }
  }

  tmp = a[n - 1];
  a[n - 1] = a[index];
  a[index] = tmp;

  selection_sort(a, n - 1);
}

int main(void)
{
  int a[MAX];
  
  printf("Enter %d integers: ", MAX);

  for(int x = 0; x < MAX; x++)
  {
    scanf("%d", &a[x]);
  }

  selection_sort(a, MAX);

  for(int x = 0; x < MAX; x++)
  {
    printf("%d ", a[x]);
  }

  printf("\n");
  
  return 0;
}
