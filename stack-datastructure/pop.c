
#include"stack.h"

int pop(stack_t *stack)
{
	if(stack->top == -1)
	{
		return e_false;
	}
	stack->top--;
	return stack->item[stack->top];
}
