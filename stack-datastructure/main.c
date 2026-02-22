#include"stack.h"

int create_stack(stack_t *stack, int capacity)
{
	if(capacity <= 0)
		return e_false;
	stack->item = (int *)malloc(capacity*sizeof(int));
	if(stack->item == NULL)
		return e_false;
	stack->capacity = capacity;
	stack->top = -1;
	return e_true;
}

int main()
{
	int choice, element, peek1, capacity;
	stack_t stack;

	printf("Enter the size of stack: ");
	scanf("%d", &capacity);

	create_stack(&stack, capacity);
	
	printf("1. push element\n2.pop element\n3.peek\n4.peep\n5.exit\nEnter your choice: ");
	while(1)
	{
		scanf("%d", &choice);
		switch(choice)
		{
			case 1: printf("Enter thr element which you want to push: ");
				scanf("%d", &element);
				if(push(&stack, element) == e_false)
				{
					printf("Info: element not pushed\n");
				}
				else
				{
					printf("Info: element successfully pushed\n");
				}
				break;
			case 2: if(pop(&stack) == e_false)
				{
					printf("Info: element not deleted\n");
				}
				else
				{
					printf("Info: elsement successfully deleted\n");
				}
				break;
			case 3:if((peek1 = peek(&stack)) == e_false)
			       {
				       printf("Info: stack is empty\n");
			       }
			       else
			       {
				       printf("Info: peek element in stack %d\n", peek1);
			       }
			       break;
			case 4:peep(stack);
			       break;
			case 5:return e_true;
			       break;
			default: printf("Invalid input, please enter valid choice\n");
				 break;
		}
	}
	return 0;
}

