
#include"sl.h"

int delete_list(Slist **head)
{
	if(*head == NULL)
	{
		return FAILURE;
	}
	Slist *temp;
	while(*head)
	{
		temp = *head;
		*head = (*head)->link;
		free(temp);
	}
	//*head = NULL;
	return SUCCESS;
}

