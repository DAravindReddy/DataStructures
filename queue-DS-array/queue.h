
#ifndef QUEUE_H
#define QUEUE_H

#include<stdio.h>
#include<stdlib.h>

#define SUCCESS 0

#define FAILURE -1

typedef struct
{
	unsigned int capacity;
	int front;
	int rear;
	int *item;
}queue_t;

int create_queue(queue_t *queue, int size);
int enqueue(queue_t *queue, int element);

int dequeue(queue_t *queue, int *element);



#endif

