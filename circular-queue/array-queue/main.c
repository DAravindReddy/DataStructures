
#include"cqueue.h"

int main()
{
}

int create_queue(c_queue *queue, int size)
{
	queue->item = malloc(size*sizeof(int));
	if(queue->item == NULL)
		return FAILURE;
	queue->count = 0;
	queue->front = -1;
	queue->rear = -1;
	return SUCCESS;
}
int enqueue(c_queue *queue, int element)
{
	if(queue->front == -1)
		queue->front = queue->front + 1;
	if(queue->rear == queue->capacity - 1)
		return FAILURE;
	queue->rear += 1;
	queue->count += 1;
	queue->item[queue->rear] = element;
	return SUCCESS;
}
int dequeue(c_queue *queue, int *element)
{
	if(
