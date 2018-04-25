
#include "stackADT.h"

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

int main(void)
{
  Stack s = create();
  Item i;
  int op1, op2;
  bool br;

  for(;;)
  {
    br = false;
    make_empty(s);

    printf("Enter an RPN expression: ");
    
    for(;;)
    {
      scanf(" %c", &i);
      
      switch(i)
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
	push(s, i - '0');
	break;
      case '*':
	op2 = pop(s);
	op1 = pop(s);
	push(s, op1 * op2);
	break;
      case '/':
	op2 = pop(s);
	op1 = pop(s);
	push(s, op1 / op2);
	break;
      case '+':
	op2 = pop(s);
	op1 = pop(s);
	push(s, op1 + op2);
	break;
      case '-':
	op2 = pop(s);
	op1 = pop(s);
	push(s, op1 - op2);
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

    printf("Value of expression: %d\n", pop(s));
  }

  return 0;
}
