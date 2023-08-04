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
void push(Node** head, int data){
    Node *temp = createNode();
    Node *p = createNode();
    temp->data = data;
    if(*head == NULL){
        *head = temp;
    }
    else{
        p = *head;
        while(p->next != NULL){
            p = p->next;
        }
        p->next = temp;
    }
}

void insertAfter(Node * prevNode, int data){

    if(prevNode == NULL){
        printf("Node does Not Exist");
    }

    else{
        Node* newNode = createNode();
        newNode->data = data;

        newNode->next = prevNode->next;
        prevNode->next = newNode;
    }
}

void printList(Node* head){
    Node* temp;
    temp = head;
    int var = 0;

    if(head == NULL){
        printf("Nothing in list");
    }
    else{
        while(temp != NULL){
            printf("%d: %d\n",var, temp->data);
            temp = temp->next;
            var += 1;
        }
    }
}

int main (int argc, char * argv[]){

    int choice;
    Node * choiceNode;

    Node* head = NULL;
    push(&head,2);
    push(&head,4);
    push(&head,56);

    printList(head);

    printf("Enter Number: ");
    scanf("%d", &choice);
    printf("\n");

    choiceNode = head;

    for(int i =0; i < choice; i++){
        if(choiceNode != NULL){
            choiceNode = choiceNode->next;
        }
        else{
            i = choice;
        }
    }

    insertAfter(choiceNode, 100);

    printList(head);
    
    return 0;
}

