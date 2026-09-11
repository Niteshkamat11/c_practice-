/*
 *
 Problem 3 — Struct Containing A Pointer To Another Malloc'd Struct

Create struct Engine (horsepower, int) 
and struct Car (name char array, Engine *engine — a POINTER field, not embedded). 
Write Car *createCar(char *name, int horsepower) that mallocs BOTH the Car AND its Engine separately. 
Write void destroyCar(Car **c) that frees both, in the correct order,
and nulls the caller's pointer.
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    int horsepower;
}Engine;


typedef struct {
    char name[10];
    Engine *engine;
}car;

car *createcar(char *name , int horsepower){
    car *ptr = malloc(sizeof (car));

    if(ptr == NULL) return NULL;


    ptr->engine= malloc(sizeof(Engine));
    if(ptr->engine == NULL) {
        free(ptr);
        return NULL;
    }
    strcpy(ptr->name , name);

    ptr->engine->horsepower = horsepower;

    return ptr;
}

void displaydata(car *ptr){

    printf("name = %s\thorsepower = %d\n",ptr->name,ptr->engine->horsepower);

}

void destroymem(car **ptr){
    free((*ptr)->engine);
    free(*ptr);
    *ptr = NULL;

}
int main(){

    car *ptr =  createcar("BMW",150);

    if(ptr == NULL){
        printf("createcar function failed\n");
        return 1;
    }
    displaydata(ptr);
    destroymem(&ptr);
    return 0;
}


