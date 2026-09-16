/*
Two structs, Node (int data, Node *next) — build Node *createNode(int val), then
manually link 3 nodes together (n1->next = n2, etc.) and 
write a printChain function that walks the chain via ->next until NULL. 
(Direct Phase 9 preview — you traced this once already.)
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;

Node *createNode(int val){
    if(val <=0) return NULL; //defense

    Node **ptr = malloc(val *sizeof(Node*));

    for(int i = 0 ; i<val ; i++){
        ptr[i] = malloc(sizeof(Node));
        if(ptr[i] == NULL){
            for(int j = 0 ; j<i ; j++){
                free(ptr[j]);
            }
            free(ptr);
            return NULL;
        }
        ptr[i]->data = (i + 1);
    }

    for(int j = 0 ; j<val-1 ; j++){

        ptr[j]->next = ptr[j+1];
    }
    ptr[val -1]->next = NULL;

    Node *head = ptr[0];
    free(ptr);
    return head;
}

void printchain(Node *head){

    Node *current = head;

    while(current != NULL){
        printf("Data = %d\n", current->data);
        current = current->next;
    }
}

void destroy(Node *head){
    Node *temp;
    while(head != NULL){
        temp = head;
        head = head->next    ;
        free(temp);
    }
}

int main(){

    Node *head = createNode(3);

    if(head == NULL){
        printf("create node failed\n");
        return 1;
    }
    printchain(head);

    destroy(head);

    return 0;
}
