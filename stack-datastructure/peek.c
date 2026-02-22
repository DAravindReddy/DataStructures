
#include"stack.h"

int peek(stack_t *stack)
{
	if(stack->top == -1)
		return e_false;
	return stack->item[stack->top];
}
