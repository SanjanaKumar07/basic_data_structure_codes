#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

//This demo covers basic implementation of a stack using Linked List and all the basic functions and operations that can be performed on Stacks

//structure to represent a stack

struct StackNode{
    int data;
    struct StackNode* next;

};

// creates a new node in the stack
struct StackNode* newNode(int data){
    struct StackNode* stackNode = (struct StackNode*)malloc(sizeof(struct StackNode));

    stackNode->data= data;
    stackNode->next= NULL;
    return stackNode;

}

//function to check if the stack is empty
int isEmpty(struct StackNode* root){
    return !root;
}

//function to push values into the stack

void push(struct StackNode** root, int data){
    struct StackNode* stackNode= newNode(data);

    stackNode->next = *root;
    //updates the root to the newNode that we pushed
    *root = stackNode;

    printf("%d pushed to the stack \n", data);

}

//function to pop(delete) a node from the top of the stack

int pop(struct StackNode** root)
{
    if (isEmpty(*root)){
        return INT_MIN;
    }

    struct StackNode* temp = *root;
    *root=(*root)->next;
    int popped = temp->data;
    free(temp);

    return popped;
}

//function which returns the top value of the stack

int peek(struct StackNode* root){
    if(isEmpty(root)){
        return INT_MIN;
    }
    return root->data;
}

int main(){

    struct StackNode* root = NULL;

    push(&root, 10);
    push(&root, 20);
    push(&root, 30);
    push(&root, 40);
    printf("%d is popped from the stack \n", pop(&root));

    printf("Top element is %d", peek(root));
}