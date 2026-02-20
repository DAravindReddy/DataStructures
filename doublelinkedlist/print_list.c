
#include"dll.h"

void print_list(dll *head)
{
	if(head == NULL)
	{
		printf("INFO: List is empty\n");
	}
	else
	{
		printf("Head->");
		while(head)
		{
			printf("%d<-", head->data);
			head= head->next;
			if(head)
			{
				printf(">");
			}
		}
		printf(" Tail\n");

	}
}

