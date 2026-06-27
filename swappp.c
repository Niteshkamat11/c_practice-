#include<stdio.h>
void swap (int *a , int *b);
int main(){
    int x , y ;
    printf("Enter the value of x ");
    scanf("%d",&x);
    printf("Enter the value of y ");
    scanf("%d",&y);

    swap(&x,&y);

    printf("the value of x is %d\n",x);
    printf("the value of x is %d\n",y);
}
void swap (int *a , int *b ){
    // int temp = *a ;
    // *a = *b;
    // *b = temp;
    
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}//this is without temp
