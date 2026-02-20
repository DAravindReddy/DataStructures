
#include"dll.h"

int insert_first(dll **head, dll **tail, int data)
{
	dll *new = malloc(sizeof(dll));
	if(new == NULL)
	{
		return FAILURE;
	}
	new->data = data;
	new->prev = NULL;
	new->next = NULL;

	if(*head == NULL)
	{
		*tail = new;
	}
	else
	{
		(*head)->prev = new;
	}
	*head = new;
	return SUCCESS;
}
	

