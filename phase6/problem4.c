/* Problem 4 — Array Of Function Pointers As A Calculator
Build a command-line calculator using an array of function pointers (add/subtract/multiply/divide),
indexed by the operator character. Handle divide-by-zero properly.

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int add(int a , int b ){
    return a +b;
}
int subtract (int a , int b){
    return a-b;
}
int multiply(int a , int b){
    return a*b;
}
int divide(int a , int b){ 
    return a /b;
}
int main(int argc , char **argv){
    int (*functionptr[256])(int  , int ) = {
        ['+']=add ,
        ['-']=subtract , 
        ['*']=multiply , 
        ['/']=divide
    };

    if(argc != 4){
        printf("must use digit to do calculation and must be 4 argument\n");
        return 1;
    }
    if(strlen(argv[2]) != 1){
        printf("invlaid operator format\n");
        return 1;
    }
    char *endptr1;
    char *endptr2;
    long a = strtol(argv[1], &endptr1, 10);
    long b = strtol(argv[3], &endptr2, 10);

    if(*endptr1 != '\0' || *endptr2 != '\0'){
        printf("it is not a valid operation %ld\n" , a );
        return 1;
    }

    unsigned char op = *(argv[2]);

    if(op == '/' && b==0){
        printf("denomitor can't be zero\n");
        return 1;
    }

    if(functionptr[op] == NULL){
        printf("operation should be valid . did you mean '+', '-','*','/'?\n");
        return 1;
    }
    int result = functionptr[op](a , b);
    printf("%d\n",result);
        return 0;
}
