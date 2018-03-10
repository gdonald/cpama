#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

char contents[STACK_SIZE];
int top = 0;

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

bool is_empty(void)
{
  return top == 0;
}

bool is_full(void)
{
  return top == STACK_SIZE;
}

void push(char c)
{
  contents[top++] = c;
}

char pop(void)
{
  return contents[--top];
}

int main(void)
{
  char c, tmp;

  printf("Enter parentheses and/or braces: ");

  while((c = getchar()) != '\n')
  {
    switch(c)
    {
    case '(':
    case '{':
      if(is_full())
      {
	stack_overflow();
      }

      push(c);
      break;

    case ')':
    case '}':
      if(is_empty())
      {
	stack_underflow();
      }

      tmp = pop();
      if((tmp == '(' && c != ')') || (tmp == '{' && c != '}'))
      {
	not_nested_properly();
      }
    }
  }

  if(!is_empty())
  {
    not_nested_properly();
  }

  printf("Parentheses/braces are nested properly\n");

  return 0;
}
