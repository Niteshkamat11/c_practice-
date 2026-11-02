#include<stdio.h>

int add(int a , int b ){
    return a + b;
}
int subtract(int a , int b){
    return a - b;
}
int multiply(int a , int b){
    return a * b;
}
int main(){

    char op = '-' ; 

    int (*funcPointer[3])(int , int) = {add , subtract , multiply};

    int index = (op == '+') ? 0 : (op == '-') ? 1 : 2;

    int result = funcPointer[index](5 , 3);

    printf("%d\n " , result);
   return 0;
}
