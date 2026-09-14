/* struct employee with char *name , float *salaryhistory(a malloc'd array of floats),historycount.
 write addsalaryrecord that reallocs salaryhistory to append a new float each time it's called*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    char *name;
    float *salaryhistory;
    int historycount;
}employee;

employee* addsalaryrecord(employee *ptr,int count,char *name,float salaryhistory,int *capacity){
    if(ptr == NULL || name == NULL || capacity == NULL) return NULL;

    ptr->historycount = count;
    if(ptr->historycount == *capacity){
        int new_capacity = *capacity + 1;

        float *ptr1 = realloc(ptr->salaryhistory,new_capacity * sizeof(float));

        if(ptr1 == NULL){
            free(ptr->salaryhistory);
            free(ptr);
            return NULL;
        }
        *capacity = new_capacity;
        ptr->salaryhistory = ptr1;
    }
    *(ptr->salaryhistory) = salaryhistory;
        ptr->salaryhistory[ptr->historycount] = salaryhistory;
    

    if(ptr->name == NULL){
        ptr->name = malloc(strlen(name)+1);
        if(ptr->name == NULL){

            free(ptr->salaryhistory);
            free(ptr);
            return NULL;
        }
        strcpy(ptr->name , name);
    }
    (ptr->historycount)++;
    return ptr;
}
int main(){
    int count = 0;
    int capacity = 1;
    employee *ptr = malloc(sizeof(employee));

    if(ptr == NULL){
        return 1;
    }
    ptr->name = NULL;
    ptr->salaryhistory = malloc(capacity * sizeof(float));

    if(ptr->salaryhistory == NULL){
        free(ptr);
        ptr=NULL; //resolving dangling pointer
        return 1;
    }
    ptr = addsalaryrecord(ptr,count, "Nitesh kamat",55000.00,&capacity);
    if(ptr == NULL){
        printf("addsalary fxn failed\n");
        return 1;
    }

    for(int i = 0 ; i<ptr->historycount ; i++){
        printf("name = %s\tsalaryhistory = %f\n",ptr->name,ptr->salaryhistory[i]);
        printf("\n");
    }
    free(ptr->name);
    free(ptr->salaryhistory);
    free(ptr);

}
