
#include"stacksll.h"


int push(stack_sll **top, int data)
{
	
	stack_sll *new = (stack_sll *)malloc(sizeof(stack_sll));
	if(new == NULL)
                return FAILURE;
	new->data = data;
	new->link = *top;

	*top = new;
	return SUCCESS;
}

int pop(stack_sll **top)
{
	if(*top == NULL)
		return FAILURE;

	stack_sll *temp = *top;
	int poped_data = temp->data;
	*top = temp->link;
	free(temp);

	return poped_data;
}

int peek(stack_sll **top)
{
	if(*top == NULL)
		return FAILURE;
	return (*top)->data;
}

int peep(stack_sll *top)
{
	if(top == NULL)
	{
		printf("Stack is empty\n");
		return FAILURE;
	}

	stack_sll *temp = top;

	while(temp)
	{
		printf("%d -> ", temp->data);
		temp = temp->link;
	}

	printf("NULL\n");
	return SUCCESS;
}
	
