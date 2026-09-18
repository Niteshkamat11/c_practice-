#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    char *name;
}player;

typedef struct{
    player members[5];
}team;

team *createteam (team *ptr,int *count,char *name){

    if(*count < 0 || *count >=5 ) {
        printf("count must be greater than equal to 0 and smaller than 5\n");
        return NULL;
    }


        ptr->members[*count].name = malloc(strlen(name)+1);
            if(ptr->members[*count].name == NULL){
                return NULL;
            }

        strcpy(ptr->members[*count].name , name);

        (*count)++;

        return ptr;

}

void printname(team *ptr , int count){
        for(int i = 0 ; i<count ; i++){
            printf("name = %s\n",ptr->members[i].name);

        }
}

void destroy(team **ptr,int *count){

    if(ptr == NULL || *ptr ==NULL) return ;

    for(int i = 0 ; i<*count ; i++){
        free((*ptr)->members[i].name);
    }

    free(*ptr);
    *ptr = NULL;
    *count = 0;

}

int main(){
    int count = 0;
    team *ptr = malloc(sizeof(team));
    if(ptr == NULL) return 1;
    if(createteam(ptr,&count,"Nitesh") == NULL){

        printf("createteam failed\n");
        destroy(&ptr,&count);
        return 1;
    }


    if(createteam(ptr,&count, "kamat")==NULL){
        printf("createteam failed\n");
        destroy(&ptr,&count);
        return 1;
    }
     printname(ptr,count);
     destroy(&ptr,&count);
     return 0;

}
