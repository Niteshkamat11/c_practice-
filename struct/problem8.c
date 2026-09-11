/*
Realloc With An Array Of Structs

Build a small "guest list" system: start with capacity = 2 guests (array of a Guest struct with name), 
use realloc (the SAFE pattern) to grow the array when full, and add 
at least 5 guests total. Print the final list and free it. 
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    char name[10];
}guest;


guest *addguest(int *capacity , int *count , guest *ptr,char **name){

    if(*capacity == *count){
        *capacity *=2;
        guest *temp = realloc(ptr , (*capacity)*sizeof(guest));
        if(temp == NULL) return NULL;

        ptr = temp;

    }
    strcpy(ptr[*count].name , name[*count]);

    
    (*count)++;
    return ptr;
}

int main(){

    int capacity = 2;
    int count = 0;

    char *name[] = {"Nitesh","kamat","albert","dave","eve"};
    guest *ptr = malloc(capacity * sizeof(guest));
    if(ptr == NULL) return 1;

    for(int i = 0 ; i<5 ; i++){

        guest *ptr1 = addguest(&capacity,&count, ptr,name);
        if(ptr1 == NULL){
            free(ptr);
            return 1;
        }
        ptr = ptr1;
    }
    for(int i = 0 ; i<count ; i++){
        printf("name = %s\n",ptr[i].name);
    }


   free(ptr);
}
