#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

int contents[STACK_SIZE];
int top = 0;

void stack_overflow(void)
{
  printf("Expression is too complex\n");
  exit(EXIT_FAILURE);
}

void stack_underflow(void)
{
  printf("Not enough operands\n");
  exit(EXIT_FAILURE);
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

void push(int n)
{
  if(is_full())
  {
    stack_overflow();
  }

  contents[top++] = n;
}

int pop(void)
{
  if(is_empty())
  {
    stack_underflow();
  }

  return contents[--top];
}

int main(void)
{
  char c;
  int op1, op2;
  bool br;

  for(;;)
  {
    br = false;
    make_empty();

    printf("Enter an RPN expression: ");
    
    for(;;)
    {
      scanf(" %c", &c);
      
      switch(c)
      {
      case '0':
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':
	push(c - '0');
	break;
      case '*':
	op2 = pop();
	op1 = pop();
	push(op1 * op2);
	break;
      case '/':
	op2 = pop();
	op1 = pop();
	push(op1 / op2);
	break;
      case '+':
	op2 = pop();
	op1 = pop();
	push(op1 + op2);
	break;
      case '-':
	op2 = pop();
	op1 = pop();
	push(op1 - op2);
	break;
      case '=':
	br = true;
	break;
      default:
	exit(EXIT_SUCCESS);
      }
      
      if(br)
      {
	break;
      }
    }
    
    printf("Value of expression: %d\n", pop());
  }

  return 0;
}
