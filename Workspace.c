#include <stdio.h>
#include <stdlib.h>

//Node Structure
typedef struct Node
{
    int data;
    struct Node *next;
}Node;



//Create Node
Node * createNode(void){
    Node * temp = (Node*)malloc(sizeof(Node));
    temp->next = NULL;
    return temp;
}

//Add node to list
Node* push(Node* head, int data){
    Node *temp = createNode();
    Node *p = createNode();
    temp->data = data;
    if(head == NULL){
        head = temp;
    }
    else{
        p = head;
        while(p->next != NULL){
            p = p->next;
        }
        p->next = temp;
    }
    return head;
}

int main (int argc, char * argv[]){
    Node* head = NULL;
    head = push(head,2);
    printf("%d", head->data);
    return 0;
}

