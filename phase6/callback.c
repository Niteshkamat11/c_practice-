#include<stdio.h>

void processing(int *arr , int size , void (*callback)(int)){

    for(int  i  = 0 ; i < size ; i ++){
        callback(arr[i]);
    }
}

void printdouble(int a  ){
    printf("%d\n" , a *2);
}
void printsquare(int a ){
    printf("%d\n" , a *a);
}



int main(){

    int nums[3] = {10,20,30};
    processing(nums , 3 ,printdouble);

    printf("================================\n");

    processing(nums , 3 , printsquare);



}
