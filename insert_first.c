
#include"sl.h"

int insert_first(Slist **head, int data)
{
	Slist *new = malloc(sizeof(Slist));
	if(new == NULL)
	{
		return FAILURE;
	}
	new->data = data;
	new->link = *head;
	*head = new;
	return SUCCESS;
}

