#ifndef SL_H
#define SL_H
#include<stdio.h>
#include<stdlib.h>


#define SUCCESS 0
#define FAILURE -1

#define LIST_EMPTY -2
#define DATA_FOUND 1
#define DATA_NOT_FOUND 2


typedef struct node
{
	int data;
	struct node *link;
}Slist;

int insert_first(Slist **head, int data);
int insert_last(Slist **head, int data);
int delete_first(Slist **head);
int delete_last(Slist **head);
int find_node(Slist *head, int key);
int delete_list(Slist **head);
void print_list(Slist *head);

#endif
