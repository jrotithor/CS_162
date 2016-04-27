#include "list.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
	char ans;
	int num;
	struct node *head = NULL;

	do {
		printf("Enter num: ");
		scanf("%d", &num);
		printf("heyo \n");
		append(&head, num);

		printf("Another num (y/n)?: ");
		scanf("%1s", &ans);
	} while (ans == 'y');

	//print(head, length(head));
	printf("%d\n", length(head));
	
	return 0;
} 
