
#include"dll.h"

int insert_last(dll **head, dll **tail, int data){
	dll *new = malloc(sizeof(dll));
	if(new == NULL)
	{
		return FAILURE;
	}
	new->prev = NULL;
	new->data = data;
	new->next = NULL;

	if(*tail == NULL)
	{
		*head = new;
	}
	else
	{
		(*tail)->next = new;
	}
	*tail = new;
	return SUCCESS;
}
