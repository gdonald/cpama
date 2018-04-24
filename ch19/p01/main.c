
#include "stackADT.h"

void not_nested_properly(void)
{
  printf("Parentheses/braces are NOT nested properly\n");
  exit(EXIT_SUCCESS);
}

void stack_overflow(void)
{
  printf("Stack overflow!\n");
  exit(EXIT_FAILURE);
}

void stack_underflow(void)
{
  printf("Stack underflow!\n");
  exit(EXIT_FAILURE);
}

int main(void)
{
  Stack s = create();
  Item i, tmp;

  printf("Enter parentheses and/or braces: ");

  while((i = getchar()) != '\n')
  {
    switch(i)
    {
    case '(':
    case '{':
      if(is_full())
      {
	stack_overflow();
      }

      push(s, i);
      break;

    case ')':
    case '}':
      if(is_empty(s))
      {
	stack_underflow();
      }

      tmp = pop(s);
      if((tmp == '(' && i != ')') || (tmp == '{' && i != '}'))
      {
	not_nested_properly();
      }
    }
  }

  if(!is_empty(s))
  {
    not_nested_properly();
  }

  printf("Parentheses/braces are nested properly\n");

  return 0;
}
