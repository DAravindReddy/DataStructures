
#include"queue.h"
void print_queue(queue_t *queue)
{
    if (queue->front == -1 || queue->front > queue->rear)
    {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue elements: ");

    for (int i = queue->front; i <= queue->rear; i++)
    {
        printf("%d ", queue->item[i]);
    }

    printf("\n");
}

int main()
{
    int choice, size, element;

    printf("Enter Queue size: ");
    scanf("%d", &size);

    queue_t queue;
    create_queue(&queue, size);

    while (1)
    {
        printf("\n1. Enqueue\n2. Dequeue\n3. Print queue\n4. Exit\nEnter your choice: ");
        scanf("%d", &choice);   // ✅ FIX 1: read choice inside loop

        switch (choice)
        {
            case 1:
                printf("Enter element to enqueue: ");
                scanf("%d", &element);

                if (enqueue(&queue, element) == FAILURE)
                    printf("Info: Failed to enqueue\n");
                else
                    printf("Enqueue successful\n");
                break;

            case 2:
                if (dequeue(&queue, &element) == FAILURE)  // ✅ FIX 2: pass address
                    printf("Info: Failed to dequeue\n");
                else
                    printf("Dequeued element: %d\n", element);
                break;
	    case 3:
		print_queue(&queue);

		break;
            case 4:
                return SUCCESS;

            default:
                printf("Invalid input\n");
        }
    }

    return SUCCESS;
}



int create_queue(queue_t *queue, int size)
{
	queue->item = malloc(size*sizeof(int));
	
	if(queue->item == NULL)
		return FAILURE;
	queue->front = -1;
	queue->rear = -1;
	queue->capacity = size;
	return SUCCESS;
}


	
int enqueue(queue_t *queue, int element)
{
    if (queue->rear == queue->capacity - 1)
        return FAILURE;   // check overflow first

    if (queue->front == -1)
        queue->front = 0;

    queue->rear = queue->rear + 1;
    queue->item[queue->rear] = element;

    return SUCCESS;
}

int dequeue(queue_t *queue, int *element)
{
    if (queue->front == -1 || queue->front > queue->rear)
    {
        queue->front = -1;
        queue->rear = -1;
        return FAILURE;
    }

    *element = queue->item[queue->front];   // correct pointer usage
    queue->front = queue->front + 1;

    return SUCCESS;
}



