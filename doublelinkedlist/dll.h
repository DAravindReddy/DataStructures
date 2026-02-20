#ifndef DLL_H
#define DLL_H

#include<stdio.h>
#include<stdlib.h>

#define SUCCESS 1
#define FAILURE 0

#define LIST_EMPTY -1
#define DATA_FOUND 2
#define DATA_NOT_FOUND -2

typedef struct node
{
	struct node *prev;
	int data;
	struct node *next;
}dll;

int insert_first(dll **head, dll **tail, int data);
int insert_last(dll **head, dll **tail, int data);
int delete_first(dll **head, dll **tail);
int delete_last(dll **head, dll **tail);
int delete_list(dll **head, dll **tail);
int find_node(dll *head, dll *tail, int key);
void print_list(dll *head);

#endif
