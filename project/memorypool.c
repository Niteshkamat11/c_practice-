#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
    char name[20];
    int *data;
}Record;

Record *createRecorder(char *name , int value){
    Record *r = malloc(sizeof(Record));

    if(r == NULL) return NULL;

    r->data = malloc(sizeof(int));

    if(r->data == NULL){
        free(r);
        return NULL;
    }

    strcpy(r->name,name);

    *(r->data) = value;

    return r;
}

void displayrecord(Record *r){
    printf("name = %s\n data = %d\n",r->name , *(r->data));
}
void destroyRecord(Record **r){

    free((*r)->data);
    free(*r);
    *r = NULL;
}
int main(){

    Record *ptr = createRecorder("Nitesh Kamat",15);

    if(ptr != NULL){

        displayrecord(ptr);
        destroyRecord(&ptr);
    }else
        printf("createRecord failed\n");

    return 0;
}
