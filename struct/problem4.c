/*
 typedef struct {
    char *description;   // note: POINTER, not array!
    int priority;
} Task;

Task *createTask(char *desc, int priority) {
    Task *t = malloc(sizeof(Task));
    t->description = malloc(strlen(desc) + 1);
    strcpy(t->description, desc);
    t->priority = priority;
    return t;
}

Write the CORRECT destroyTask(Task **t) for this struct — pay attention to the fact that description is ALSO separately heap-allocated
(unlike Problem 1-3 where fields were plain ints or arrays).
What would leak if you only did free(*t) without freeing description first?

 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <sys/types.h>


typedef struct {
    char *description;  
    int priority;
} Task;

Task *createTask(char *desc, int priority) {
    Task *t = malloc(sizeof(Task));

    if(t == NULL) return NULL;

    t->description = malloc(strlen(desc) + 1);

    if(t->description == NULL){
        free(t);
        return NULL;
    }

    strcpy(t->description, desc);
    t->priority = priority;
    return t;
}
void destroyTask(Task **t){

    free((*t)->description);
    free(*t); // if this is freed without freeing the description first then it would leak 4 byte of memory
    *t = NULL;

}

void displayTask(Task *ptr){

    printf("description = %s\npriority = %d",ptr->description , ptr->priority);

}
int main(){
    Task *ptr = createTask("perform problem4",1);

    if(ptr ==NULL){
        printf("CreateTask function failed\n");
        return 1;
    }
    displayTask(ptr);
    destroyTask(&ptr);

}
