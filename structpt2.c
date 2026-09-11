#include <stdlib.h>
#include<stdio.h>
typedef struct{
    int *data;
    int *temp;
    int size;
    int capacity;
}dynamicarray;
void push(dynamicarray *arr , int value){
    if(arr->size == arr->capacity){
        arr->capacity *= 2;

        arr->temp = realloc(arr->data,arr->capacity*sizeof(int));
        if(arr->temp == NULL)
            return ;
        arr->data = arr->temp;
    }

    *((arr->data)+arr->size) = value;
    arr->size++;
}
int main(){
    dynamicarray arr;

    arr.temp = NULL;

    arr.size = 0
        ;
    arr.capacity = 2;
    arr.data = (int *)malloc(arr.capacity * sizeof(int));

    if(arr.data == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }
    push(&arr , 10);
    push(&arr , 20);
    push(&arr , 30);
    push(&arr , 40);
    push(&arr , 50);
    for (int i = 0; i<arr.size;i++){

        printf("%d\n",*(arr.data + i));
    }
    printf("%d\n",arr.capacity);
    free(arr.data);
    return 0;
}
