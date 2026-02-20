
#include"dll.h"

int delete_last(dll **head, dll **tail)
{
	if(*tail == NULL)
	{
		return LIST_EMPTY;
	}

	dll *temp = *tail;
	*tail = (*tail)->prev;
	if(*tail == NULL)
	{
		*head = NULL;
	}
	else
	{
		(*tail)->next = NULL;
	}
	free(temp);
	return SUCCESS;
}
