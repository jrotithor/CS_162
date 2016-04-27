/*
Program: list.h
Author: Jaydeep Rotithor
Date: 5/31/2015
Description: contains all of the declarations needed for the linked list
Input: none
Output: none
*/
struct node {
 int val;
 struct node *next;
};
//Implemented in Lab #9, but now return new head address
int length(struct node *);
void print(struct node *, int);
struct node * push(struct node *, int); //put at front
struct node * append(struct node *, int); //put at back
struct node * clear(struct node *);
struct node * remove_node(struct node *, int);
struct node * sort_ascending(struct node *);
struct node * sort_descending(struct node *);
//insert into a specific location in the list. takes in head, value to put in node, and the "index" of the where the item goes.
struct node * insert_middle(struct node *, int, int);
