#include <stdio.h>

void print_error(const char *message)
{
  static int n = 1;
  printf("Error: %d: %s\n", n++, message);
}

int main(void)
{
  print_error("foo");
  print_error("bar");
  print_error("baz");
  
  return 0;
}
