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
  printf("Stack overflow!");
  exit(EXIT_FAILURE);
}

void stack_underflow(void)
{
  printf("Stack underflow!");
  not_nested_properly();
}

void make_empty(void)
{
  top = 0;
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
  if(is_full())
  {
    stack_overflow();
  }
  else
  {
    contents[top++] = c;
  }
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
      push(c);
      break;
    case ')':
    case '}':
      if(is_empty())
      {
	stack_underflow();
      }
      else
      {
	tmp = pop();
	
	if((tmp == '(' && c != ')') || (tmp == '{' && c != '}'))
	{
	  not_nested_properly();
	}
      }
    }
  }

  if(is_empty())
  {
    printf("Parentheses/braces are nested properly\n");
  }
  else
  {
    not_nested_properly();
  }

  return 0;
}
