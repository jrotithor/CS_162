#ifndef MERGE_H
#define MERGE_H
struct node {
 int info;
 struct node *next;
};
int length(struct node *);
void print(struct node *, int);
struct node* push(struct node *, int);
void divideList(struct node *,struct node **);
struct node * mergeList(struct node *,struct node *);
void recMergeSort(struct node **);
void mergeSort(struct node **, struct node **);
#endif