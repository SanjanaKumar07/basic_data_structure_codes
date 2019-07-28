#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};


//function to add the node at the front of the list.
void push( struct Node** head_ref, int new_data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data= new_data;
    new_node->next=(*head_ref);
    *head_ref=new_node;
    printf("Value entered");
}
//function to add insertion at any node.
void insert_after(struct Node* prev_node, int new_data)
{
    
    if(prev_node == NULL){
        printf("The Previous node cannot be null");
    }

    struct Node* new_node= (struct Node*)malloc(sizeof(struct Node));

    new_node->data= new_data;

    new_node->next=prev_node->next;

    prev_node->next= new_node;

    printf("\n node inserted in between");
}


int main(){
    
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    struct Node** head_pointer;
    head_pointer = &head;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

     head->data = 1;
    head->next = second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=NULL;

    push(head_pointer,10);
    
    insert_after(second,20);

}