
#include "sort.h"

void sort(struct part parts[], int n)
{
  if(n == 0)
  {
    return;
  }

  int largest = 0, index = 0;
  struct part tmp;
  
  for(int x = 0; x < n; x++)
  {
    if(parts[x].number > largest)
    {
      largest = parts[x].number;
      index = x;
    }
  }

  tmp          = parts[n - 1];
  parts[n - 1] = parts[index];
  parts[index] = tmp;

  sort(parts, n - 1);
}
