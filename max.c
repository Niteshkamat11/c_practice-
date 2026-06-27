#include<stdio.h>
#include<stdlib.h>

/*
int* findmax (int* arr , int size){
    int *p = malloc(sizeof (int));
    *p= *arr;
    for(int i=0;i<size;i++){
        if(*(arr+i)>(*p)){
            *p = *(arr+i);
        }
    }
    return p;
}
int main(){
    int nums[5] = {10,60,70,90,1};
    int *c = findmax(nums,5);
    printf("%d\n",*c);
    free(c);

}

this is advanced version i did it its my logic but there is simple version too its just complex
*/

/*
int findmax (int* arr , int size){
    int max = *arr;
    for(int i=0;i<size;i++){
        if(*(arr+i)>max){
            max = *(arr+i);
        }
    }
    return max;
}
int main(){
    int nums[5] = {10,60,70,90,1};
    printf("%d\n",findmax(nums,5));
}

this is simple and easy way we did it 
*/

/* write a function that allocates memory for an int , sets it to a give n value and properly returns ir - but safely handles malloc failure */

void *createint(int value){

    int *c = malloc(sizeof (int));
    if( c != NULL){
        *c=value;
        return c;
    }else{
        printf("malloc failed it doesn't allocated any memory\n");
    }
}

int main(void){
    int *p = createint(99);
    if(p != NULL){
        printf("%d\n",*p);
    }else {
        printf("function returned empty address and p hold null value as address\n ");
    }
    free(p);
}
