#include<stdio.h>
#include<stdlib.h>
//this demo creates 3 nodes in a linked list
struct Node{
    int data;
    struct Node* next;
};

int main()
{
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    //allocating 3 nodes in the heap
    head  = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    //Linking and adding values to the data items in each node
    head->data = 1;
    head->next = second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=NULL;
}