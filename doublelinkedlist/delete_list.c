
#include"dll.h"

int delete_list(dll **head, dll **tail)
{
	if(*head == NULL)
	{
		return LIST_EMPTY;
	}
	dll *current = *head;
	while(current != NULL)
	{
		dll *temp = current;
		current = current->next;
		free(temp);
	}
	*head = NULL;
	*tail = NULL;
	return SUCCESS;
}
