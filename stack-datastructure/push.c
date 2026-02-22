
#include"stack.h"

int push(stack_t *stack, int element)
{
	if(stack->top == (int)stack->capacity - 1)
		return e_false;
	++stack->top;
	stack->item[stack->top] = element;
	e_true;
}
