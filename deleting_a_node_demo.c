#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void push(struct Node** head_ref, int new_data){
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    new_node->data= new_data;
    new_node->next= (*head_ref);

    (*head_ref) = new_node;

}

//this is the deleting function, this deletes the first occurance of the key

void deleteNode(struct Node** head_ref, int key){
    struct Node* temp = *head_ref, *prev;

    if(temp!=NULL && temp->data == key)
    {
        *head_ref = temp->next; //changed head
        free(temp);
        return;
    }
    //Search for the key and keep track of the previous node as we need to change "prev->next"

    while(temp!=NULL && temp->data!=key)
    {
        prev = temp;
        temp = temp->next;

        //if The Key was not present in the LL

        if(temp==NULL) return;
        //unlink the code from LL

        prev->next = temp->next;
         
         free(temp);
    }

    //to print the LL

   
} 

void displayList(struct Node *node) 
    { 
    while (node != NULL) 
    { 
        printf(" %d ", node->data); 
        node = node->next; 
    } 
    }
    int main() 
{ 
    /* Start with the empty list */
    struct Node* head = NULL; 
  
    push(&head, 7); 
    push(&head, 1); 
    push(&head, 3); 
    push(&head, 2); 
  
    puts("Created Linked List: "); 
    displayList(head); 
    deleteNode(&head, 1); 
    puts("\nLinked List after Deletion of 1: "); 
    displayList(head); 
    return 0; 
}
