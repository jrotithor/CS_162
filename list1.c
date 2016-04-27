#include "list.h"
#include <stdio.h>
#include <stdlib.h>
/*
int main() {
	printf("are we here???? \n");
	struct node *bloop = NULL;
	struct node *bloop2 = NULL;
	struct node *bloop3 = NULL;
	printf("we got here. \n");
	bloop = malloc(sizeof(struct node));
//	bloop -> val = 97;
	bloop2 = malloc(sizeof(struct node));
//	bloop2 -> val = 84;
	bloop2 = bloop;
	bloop -> next = bloop2;
	bloop2 -> next = bloop3;
	int temp = length(bloop);
	printf("Value is %d \n",temp);	//1 
	push(&bloop, temp);
	temp = length(bloop);	
	printf("Value is %d \n",temp); 	//2
	append(&bloop2, temp);		//changed from 1 to temp
	temp = length(bloop);
	printf("Value is %d \n", temp);	//3
	print(bloop, 3);		
	return 0;
} */

int length(struct node *bloop) {
	int count = 0;
	struct node *temp = bloop;
	while (temp != NULL) {
		count++;
		temp = temp -> next;
	}
	return count;
}

void push(struct node **bloop, int num) {
	struct node *insptr = malloc(sizeof(struct node));
	insptr -> next = (*bloop);
	insptr -> val = num;
	(*bloop) = insptr;
}

void append(struct node **bloop, int num) {
	struct node *temp = *bloop, *insptr = malloc(sizeof(struct node));
	insptr -> val = num;
	insptr -> next = NULL;

	if (*bloop == NULL) {
		free(insptr);
		push(bloop, num);
	}	
	else {
		while (temp -> next != NULL) {
			temp = temp -> next;
		}
		temp -> next = insptr;
	}
}

void print(struct node *bloop, int num){
	//START FROM THE BEGINNING OF THE LIST!!! just kidding?? last elt not printing. Did it get pushed correctly?
	struct node *nodePtr = bloop;
	
	while (nodePtr != NULL){
		printf("Print funct: value is %d \n", nodePtr -> val);
		nodePtr= nodePtr -> next;
	}

}
