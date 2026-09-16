#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// the method is manual addtion of node and linking instead of creating val number of nodes 
// internally , all at once , and auto-links them together like problem12.c
typedef struct Node{
    int data;
    struct Node *next;
}Node;


Node *createNode(int val){

    Node *ptr = malloc(sizeof(Node));

    if(ptr == NULL) return NULL;

    ptr->data = val;
    ptr->next = NULL;
    return ptr;
}

void printchain(Node *head){

    Node *current = head;

    while(current != NULL){
        printf("Data = %d\n", current->data);
        current = current->next;
    }
}

void destroy(Node *n1){

    Node *temp;

    while(n1 != NULL){
        temp = n1;
        n1 = n1->next;
        free(temp);
    }
}
int main(){

    Node *n1 = createNode(1);

    if(n1== NULL) return 1;
    Node *n2 = createNode(2);
    if(n2 == NULL) {
        free(n1);
        return 1;
    }
    Node *n3 = createNode(3);
    if(n3 == NULL){
        free(n2);
        free(n1);
        return 1;
    }

    n1->next = n2;
    n2->next = n3;
    n3->next = NULL;

    printchain(n1);

    destroy(n1);
}
