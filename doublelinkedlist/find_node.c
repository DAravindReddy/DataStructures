
#include"dll.h"

int find_node(dll *head, dll *tail, int key)
{
	if(head == NULL)
	{
		return FAILURE;
	}
	int pos = 1;
	while(head)
	{
		if(head->data == key)
		{
			return pos;
		}
		head = head->next;
		pos++;
	}
	return SUCCESS;
}

