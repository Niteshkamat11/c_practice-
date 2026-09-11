#include<stdio.h>
#include<stdlib.h>

int *createArray(int intialcapacity);
int *addElement(int *arr,int *size,int *capacity,int newvalue);

int main(){
    int size =0;
    int capacity = 2;
    int *arr = createArray(2);

    if(arr == NULL){
        printf("calloc failed\n");
        return 1;
    }

    arr = addElement(arr, &size, &capacity, 10);
    arr = addElement(arr, &size, &capacity, 40);
    arr = addElement(arr, &size, &capacity, 30);
    arr = addElement(arr, &size, &capacity, 50);
    arr = addElement(arr, &size, &capacity, 60);

    if(arr == NULL){
        printf("reallocation failed\n");
        return 1;
    }//this needs to be checked for all addElement call becauee if anyone return null then it opereates 
     //on null rather than on address right now it is good but better check for every call

    for(int i = 0; i<size;i++){
        printf("%d\n",*(arr+i));
    }

    free(arr);


}
int *createArray(int initialcapacity){

    int *arr = (int *)calloc(initialcapacity,sizeof(int));

    if(arr != NULL){
        return arr;
    }
    return NULL;
}
int *addElement(int *arr,int *size,int *capacity,int newvalue){

    if(*size == *capacity){
        *(capacity) *= 2;
        int *temp = (int *)realloc(arr,(*capacity)*sizeof(int));
        if(temp == NULL){
            return NULL;
        }
        arr=temp;

    }
    *(arr+*(size)) = newvalue;
    (*size)++;
    return arr;

}
