
#include"stack.h"

void peep(stack_t stack)
{
	if(stack.top == -1)
	{
		printf("Info: stack empty\n");
		return;
	}
	for(int i = stack.top; i >= 0; i--)
	{
		printf("%d ", stack.item[i]);
	}
}

