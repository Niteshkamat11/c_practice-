#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
    char name[10];
    int leg;
}animal;


void create (animal **zoo , char **name  , int *leg){

    for(int i = 0; i<3; i++){

        *(zoo + i) = malloc(sizeof(animal));
        
        if(*(zoo + i)==NULL) return;
        
        strcpy((*(zoo + i))->name ,*(name + i));
        
        (*(zoo + i))->leg = *(leg + i);
        
        
    }

}

void displayanimal(animal **ptr){

    for(int i = 0 ; i<3 ; i++){
        printf("name = %s\tleg = %d\n",ptr[i]->name,ptr[i]->leg);

    }

}

void destroymem(animal **zoo){

    for (int i = 0 ; i<3 ; i++){

        free(*(zoo + i));
        zoo[i] = NULL;
    }
}

int main(){
       animal *zoo[3];
       char *name[3] = {"dog","cat","spider"};
       int legs[3] = {4,4,8}; 
     create(zoo,name,legs);
     displayanimal(zoo);
     destroymem(zoo);
}
