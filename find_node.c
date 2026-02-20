
#include"sl.h"

int find_node(Slist *head, int key)
{
	if(head == NULL)
		return FAILURE;
	int pos = 1;
	while(head)
	{
		if(head->data == key)
		{
			return pos;
		}
		head = head->link;
		pos++;
	}
	return FAILURE;
}
