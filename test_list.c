/*
Program: test_list.c
Author: Jaydeep Rotithor
Date: 5/31/2015
Description: contains the main function for the linked list
Input: none
Output: none
*/

#include "list.h"
#include <stdio.h>
#include <stdlib.h>
int main (){
 char ans[2];
 int num;
 struct node *head = NULL;
 struct node * tail = NULL;
 do {
 do {
	 
 printf("Enter a number: ");

 scanf("%d", &num);
//  printf("hi");
 head = push(head, num);//Can change to append
 //printf("%d", length(head));
 printf("Do you want another num (y or n): ");
 scanf("%1s",ans);
 } while(ans[0] == 'y');
//head = insert_middle(head, 1, 4);
//printf("4 was inserted into index 1 \n");
//head = remove_node(head, 3);
//printf("all 3's were removed from the list \n");
 printf("Sort ascending or descending (a or d)? ");
 scanf("%1s",ans);
 if(ans[0] == 'a') head=sort_ascending(head);
 else if(ans[0] == 'd') head=sort_descending(head);
//head = insert_middle(head, 3, 1);
 print(head, length(head));
 printf("Do you want to do this again (y or n)? ");
 scanf("%1s",ans);
 if(ans[0] == 'y') head = clear(head);
 //print(head, length(head));

// printf("%d", length(head));

 } while(ans[0] == 'y');
 return 0;
}
