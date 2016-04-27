#include <stdio.h>
#include "merge.h"
int main(){
	struct node * n = NULL;
	struct node * n2 = n;
	//struct node * newPtr;
	int num;
	char ans[2];
	do {
	 
 printf("Enter a number: ");

 scanf("%d", &num);
 n = push(n, num);
 printf("Do you want another num (y or n): ");
 scanf("%1s",ans);
 } while(ans[0] == 'y');
	
//	divideList(n, &n2);
	//newPtr = mergeList(n,n2);
	recMergeSort(&n);
	mergeSort(&n, &n2);
	printf("%d", length(n));
	print(n, length(n));
		//printf("this is the end of the program");
}