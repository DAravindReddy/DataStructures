
#ifndef CQUEUE_H
#define CQUEUE_H

#include<stdio.h>
#include<stdlib.h>

#define SUCCESS 0
#define FAILURE -1

typedef struct
{
	unsigned int capacity;
	int front;
	int rear;
	int count;
	int *item;
}c_queue;

int enqueue(c_queue *queue, int element);
int dequeue(c_queue *queue, int *element);
int create_queue(c_queue *queue, int size);


#endif
