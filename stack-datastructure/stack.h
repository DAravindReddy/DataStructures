
#ifndef STACK_H
#define STACK_H

#include<stdio.h>
#include<stdlib.h>

#define e_true 0
#define e_false -1

typedef struct stack
{
	unsigned int capacity;
	int top;
	int *item;
}stack_t;

int create_stack(stack_t *stack, int capacity);
int push(stack_t *stack, int element);
int pop(stack_t *stack);
int peek(stack_t *stack);
void peep(stack_t stack);


#endif
