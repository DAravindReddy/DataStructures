
#include"stacksll.h"

int main()
{
	int choice, data;
	int peek1;
	stack_sll *top = NULL;

	printf("1. push element\n2. pop an element\n3. peek\n4. peep\n5. Exit\nEnter your choice: ");
	while(1)
	{
		scanf("%d", &choice);
		switch(choice)
		{
			case 1: printf("Enter the element which you want to push: ");
				scanf("%d", &data);
				if(push(&top, data) == FAILURE)
				{
					printf("Info: pushing element fails\n");
				}
				else
				{
					printf("Info: element is pushed successfully\n");
				}
				break;
			case 2:if(pop(&top) == FAILURE)
				       printf("Info: pop operation failed\n");
			       else
				       printf("Infp: element deleted successfully\n");
			       break;
			case 3:
				if((peek1 = peek(&top)) == FAILURE)
					printf("Info: list is empty\n");
				else
					printf("Peek element is %d\n", peek1);
				break;
			case 4:
				peep(top);
				break;
			case 5:
				return SUCCESS;
			default: printf("Enter valid choice\n");
				 break;

		}
	}
	return 0;
}
	

