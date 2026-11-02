/*
Problem 3 — Sorting With A Custom Comparator (Build Your Own Mini qsort)
Write void bubbleSort(int *arr, int size, int (*compare)(int, int)) where compare(a, b) returns a NEGATIVE number if a should come
before b. Write TWO comparator functions — one for ascending order, one for descending — and sort the SAME
array both ways using the SAME sort function.
*/


#include<stdio.h>

void bubbleSort(int *arr , int size , int (*compare)(int , int)){
    for(int i = 0 ; i < size-1 ; i++){
        for(int j = 0 ; j<size-1 ; j++){

            int result = compare(arr[j] , arr[j+1]);
            if(result == 1){
                int temp = arr[j];
               *(arr +j) = arr[j+1];
                *(arr + j+1) = temp; 
            }
        }
    }
}

int ascending( int a , int b){
    return (a<b)?-1:1;
}

int descending( int a , int b){
    return (a>b)?-1:1;

}
int main(){

    int nums[] = {3,4,1,5};

    bubbleSort(nums , 4 , ascending);

    for(int i = 0 ; i<4 ; i++){
        printf(" %d\t",nums[i]);
    }
    printf("\n");
    bubbleSort(nums , 4 , descending);
    for(int i = 0 ; i<4 ; i++){
        printf(" %d\t",nums[i]);
    }
    return 0;
}
