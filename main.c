
#include"sl.h"
int main()
{
	int option, data, key;
	
	Slist *head = NULL;
	printf("1. Insert last\n2.Insert first\n3. Delete last\n4. Delete first\n5. Delete list\n6. Find node\n7. Print list\n8. Exit\n Enter your option: ");
	while(1)
	{
		scanf("%d", &option);

		switch(option)
		{
			case 1:
				printf("Enter the number that you want to insert at last: ");
				scanf("%d", &data);
				if(insert_last(&head, data) == FAILURE)
				{
					printf("INFO: Insertion Failed\n");
				}
				break;
			case 2:
				printf("Enter the number that you want to insert at first: ");
                                scanf("%d", &data);
                                if(insert_first(&head, data) == FAILURE)
                                {
                                        printf("INFO: Insertion Failed\n");
                                }

				break;
			case 3:
				if(delete_first(&head) == FAILURE)
				{
					printf("Delete first failure\nList is Empty\n");
				}
				else
				{
					printf("Delete first successfull\n");
				}
				break;
			case 4:
				if(delete_last(&head) == FAILURE)
				{
                                        printf("Delete last failure\nList is Empty\n");
                                }
                                else
                                {
                                        printf("Delete last successfull\n");
                                }
				break;
			case 5:
				if(delete_list(&head) == FAILURE)
				{
					printf("Delete list failure\nList is Empty\n");
                                }
                                else
                                {
                                        printf("Delete list successfull\n");
                                }
				break;
			case 6:
				printf("Enter your key to find: ");
				scanf("%d", &key);
				int count;
				if((count = find_node(head, key)) == FAILURE)
				{
					printf("FAILURE\nList Empty\n");
				}
				else
				{
					printf("INFO: %d is founded in the list at the position %d\n", key, count);
				}
				break;
			case 7: 
				print_list(head);
				break;
			case 8:
				return SUCCESS;
				break;
			default:
				printf("Enter proper choice\n");
				break;
		}
	}
	return 0;
}
