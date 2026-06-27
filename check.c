#include<stdio.h>
#include<stdlib.h>
int *danglingexample();
int main(){
    int *p = danglingexample();

    if (p != NULL){
        printf("%d\n",*p);
        free(p);

    }else{
        printf("pointer p points to nothing as p holds address 0 \n");
    }
    return 0;
}

int* danglingexample(){
    int *p = malloc(sizeof (int));

    if( p != NULL ){
        *p = 42;
        return p;
    }else{
        return NULL;
    }
}

