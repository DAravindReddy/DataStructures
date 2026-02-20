#include"dll.h"

int main()
{
	int data, key, option;

	dll *head = NULL;
	dll *tail = NULL;

	printf("1. Insert first\n2. Insert last\n3. Delete first\n4. Delete last\n5.Delete list\n6. print list\n7. Found data\n8. Exit\nEnter your option: ");

	while(1)
	{
		scanf("%d", &option);

		switch(option)
		{
			case 1:printf("Enter your data insert at first: ");
			       scanf("%d", &data);
			       if(insert_first(&head, &tail, data) == FAILURE)
			       {
				       printf("INFO: Insertion failed\n");
			       }
			       break;
			case 2:printf("Enter your data insert at last: ");
			       scanf("%d", &data);
			       if(insert_last(&head, &tail, data) == FAILURE)
			       {
				       printf("INFO: Insertion failed\n");
			       }
			       break;
			case 3:
			       if(delete_first(&head, &tail) == FAILURE)
			       {
				       printf("INFO: delete failure\n");
			       }
			       else
			       {
				       printf("INFO: deleted the node\n");
			       }
			       break;
			 case 4:
                               if(delete_last(&head, &tail) == FAILURE)
                               {
                                       printf("INFO: delete failure\n");
                               }
                               else
                               {
                                       printf("INFO: deleted the node\n");
                               }
                               break;
			case 5:
                               if(delete_list(&head, &tail) == FAILURE)
                               {       
                                       printf("INFO: delete failure\n");
                               }       
                               else
                               {       
                                       printf("INFO: deleted the node\n");
                               }
                               break;
			case 6:
                               print_list(head);
                               break;
			case 7:
			       printf("Enter your key to find: ");
			       scanf("%d", &key);
			       if(find_node(head, tail, key) == FAILURE)
			       {
				       printf("INFO: data not found\n");
			       }
			       break;
			case 8:
			       return SUCCESS;
			       break;
			default:
			       printf("Enter valid option: ");
		}
	}
	return 0;
}



