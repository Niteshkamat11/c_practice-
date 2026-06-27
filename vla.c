#include<stdio.h>


int main(){
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        *(arr+i) = i 
            ;

    }

    for(int i= 0; i<n; i++){
        printf("%d\t",*(arr+i));
    }
    printf("\n");
}

//the key idea is that you can actually intialize the size of array during the run time 
//lates c99 has implemented this older c may throw up error 
