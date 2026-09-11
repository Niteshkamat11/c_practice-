#include<stdio.h>
#include<stdlib.h>
int *memoryallocator(){
    int *p = calloc(sizeof(int),4);
    if(p==NULL){
        printf("calloc failed\n");
        return NULL;
    }
    return p;
}
int main(){
    int *p = memoryallocator();
    if(p==NULL){
        return 1;
    }
    *p = 4;
    *(p+1) = 15;
    *(p+2) = 99;
    *(p+3) = 77;
    *(p+4) = 1;
    printf("the number in 1st int(byte) is = %d\n",*p);
    printf("the number in 1st int(byte) is = %d\n",*(p+1));
    printf("the number in 1st int(byte) is = %d\n",*(p+2));
    printf("the number in 1st int(byte) is = %d\n",*(p+3));
    //free(p);
}
