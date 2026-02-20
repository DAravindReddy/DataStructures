
#include"dll.h"

int delete_first(dll **head, dll **tail)
{
	if(*head == NULL)
		return LIST_EMPTY;
	dll *temp = *head;
	*head = (*head)->next;
	if(*head == NULL)
	{
		*tail = NULL;
	}
	else
	{
		(*head)->prev = NULL;
	}
	free(temp);
	return SUCCESS;
}

