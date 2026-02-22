
#ifndef STACKSLL_H
#define STACKSLL_H


#include<stdio.h>
#include<stdlib.h>

#define SUCCESS 0
#define FAILURE -1

//creating stack using linkedlist
typedef struct stack_sll
{
        int data;
        struct stack_sll *link;
}stack_sll;

//Here we are creating variable size thats why we are not creating

int push(stack_sll **top, int element);
int pop(stack_sll **top);
int peek(stack_sll **top);
int peep(stack_sll *top);



#endif
