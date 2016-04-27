/*
Program: list.c
Author: Jaydeep Rotithor
Date: 5/31/2015
Description: contains all of the implementations needed for the linked list
Input: none
Output: none
*/

#include "list.h"
#include <stdio.h>
#include <stdlib.h>

/*
Function: length
Description: gives the length of the linked list
Parameters:a pointer to a node
Pre-conditions:a linked list exists
Post-conditions:the length of the linked list is returned

*/
int length(struct node *n){
	
	int count = 0;
	struct node *temp = n;
	while (temp  -> next != NULL) {
		count++;
		temp = temp -> next;
	}
	return count;
}
/*
Function: print
Description: prints the linked list
Parameters:a pointer to a node
Pre-conditions:a linked list exists
Post-conditions:the linked list is printed

*/
void print(struct node *n, int a){
	
	struct node *nodePtr = n;
	
	while (nodePtr != NULL){
		printf("Print funct: value is %d \n", nodePtr -> val);
		nodePtr= nodePtr -> next;
}
}
/*
Function: push
Description: puts a new node at the start of the linked list
Parameters:a pointer to a node and an integer
Pre-conditions:none
Post-conditions: a node is put at the start of the linked list

*/
struct node* push(struct node * n, int a){

	struct node *insptr = malloc(sizeof(struct node));
	insptr -> next = n;
	insptr -> val = a;
	n = insptr;
		return n;

}
/*
Function: append
Description: puts a new node at the end of the linked list
Parameters:a pointer to a node and an integer
Pre-conditions:none
Post-conditions: a node is put at the end of the linked list

*/
struct node* append(struct node * n, int num){
	struct node *temp = n, *insptr = malloc(sizeof(struct node));
	insptr -> val = num;
	insptr -> next = NULL;

if (n == NULL) {
	//	printf("hi");
		//free(insptr);
		//push(n, num);
n = insptr;
		}
//	if(n -> next == NULL){
	//	 -> next = insptr;
		
//	}

	
	else {
			//printf("hi");
		while (temp -> next != NULL) {
			temp = temp -> next;
		}
		temp -> next = insptr;
	}
	return n;
}
/*
Function: clear
Description: deletes the linked list
Parameters:a pointer to a node
Pre-conditions:a linked list exists
Post-conditions:the linked list is deleted

*/
struct node * clear(struct node * n){
	if(n != NULL){
		struct node * next_node = n -> next;
		free(n);
		n -> next = NULL;
		clear(next_node);
		
	}
//	free(n);
else
	printf("list has been cleared. \n");
	return n;
}
/*
Function: remove_node
Description: removes a node from the linked list with the specified value
Parameters:a pointer to a node and an integer
Pre-conditions:a linked list exists
Post-conditions:the specified node will be removed

*/
struct node * remove_node(struct node * n, int ins){
	struct node * nodePtr = n;
	struct node * previous = nodePtr;
	nodePtr = nodePtr -> next;
	while(nodePtr -> next != NULL){
	if(nodePtr -> val == ins)
	
	{
	//printf("hi");		
	previous -> next = nodePtr -> next;
	free(nodePtr);
	nodePtr -> next = NULL;
	nodePtr = previous -> next;

	}
	else{
	nodePtr = nodePtr -> next;
	previous = previous -> next;
	}
		if(n -> val == ins)
			free(n);

	
	}
	if(nodePtr -> val == ins)
	free(nodePtr);

	return n;
}
/*
Function: sort_ascending
Description: sorts the linked list from smallest to largest
Parameters:a pointer to a node
Pre-conditions:a linked list exists
Post-conditions:the linked list will be sorted in the proper order

*/
struct node * sort_ascending(struct node * n){
	int i;
	if(length(n) == 1)
		return n;
	else{
	struct node * nodePtr;
	struct node * previous;
	//nodePtr = nodePtr -> next;
	for(i = 0; i < length(n); i++){
	
	nodePtr = n;
		previous = nodePtr;
		if(nodePtr -> next != NULL)
		nodePtr = nodePtr -> next;
		while(nodePtr != NULL){
		if(nodePtr -> val < previous -> val)
		{
			int temp = nodePtr -> val;
			nodePtr -> val = previous -> val;
			previous -> val = temp;
			nodePtr = nodePtr -> next;
			previous = previous -> next;
			
		}
		else{
		nodePtr = nodePtr -> next;
		previous = previous -> next;
		}
	}
		
	}
}
	return n;
}
/*
Function: sort_descending
Description: sorts the linked list from largest to smallest
Parameters:a pointer to a node
Pre-conditions:a linked list exists
Post-conditions:the linked list will be sorted in the proper order

*/
struct node * sort_descending(struct node * n){
	int i;
	if(length(n) == 1)
		return n;
	else{
	struct node * nodePtr;
	struct node * previous;
	//nodePtr = nodePtr -> next;
	for(i = 0; i < length(n); i++){
	
	nodePtr = n;
		previous = nodePtr;
		if(nodePtr -> next != NULL)
		nodePtr = nodePtr -> next;
		while(nodePtr != NULL){
		if(nodePtr -> val > previous -> val)
		{
			int temp = nodePtr -> val;
			nodePtr -> val = previous -> val;
			previous -> val = temp;
			nodePtr = nodePtr -> next;
			previous = previous -> next;
			
		}
		else{
		nodePtr = nodePtr -> next;
		previous = previous -> next;
		}
	}
		
	}
}
	return n;
}
/*
Function: insert_middle
Description: puts a new node in the middle of the linked list
Parameters:a pointer to a node and 2 integers
Pre-conditions:none
Post-conditions: a node is put in the middle of the linked list

*/
struct node * insert_middle(struct node * n, int before, int after){
	int i = 0;
	struct node * nodePtr, * insptr = malloc(sizeof(struct node));
	nodePtr = n;
	while(i < before - 1){
	nodePtr = nodePtr -> next;
	i++;
	}
	insptr -> val = after;
	insptr -> next = nodePtr -> next;
	nodePtr -> next = insptr;
	//ins -> val = before;
	return n;
	}

