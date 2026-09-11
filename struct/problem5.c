/*
Problem 5 — Struct Array On The STACK vs Struct Array On The HEAP

Write TWO versions of a function that creates 5 Point3Ds (from Problem 1):

void stackVersion() — creates Point3D arr[5] on the STACK, fills it, prints it (no malloc at all)
Point3D *heapVersion() — creates the SAME 5 points but on the HEAP using
ONE malloc call for the whole array (malloc(5 * sizeof(Point3D))), fills it, RETURNS it

Explain in a comment: why would stackVersion be dangerous if it tried to RETURN arr instead of just printing it locally?
*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    int x,y,z;
}point3D;

point3D *heapversion(){
    point3D *ptr = malloc(5 * sizeof(point3D));

    if (ptr == NULL) return NULL;

    for(int i = 0 ; i<5; i++){
        
        (ptr + i)->x = i+1;
        (ptr + i)->y = i+2;
        (ptr +i)->z = i+3;
    }


    return ptr; 

}

void stackversion(void){
    point3D arr[5] ;

    for(int i = 0 ; i<5; i++){
        arr[i].x = i+1; 
        arr[i].y = i+2;
        arr[i].z = i+3;

        printf("for index = %d\nx = %d\ty = %d\tz = %d\n",i,arr[i].x,arr[i].y,arr[i].z); //doesn't worked why?
        printf("\n");
    }
}
/* If we tried to return arr (or &arr[0]):
   arr lives in this function's stack frame.
   When the function returns, the frame is destroyed
   (popped off the stack). The caller would hold a pointer
   to memory that has already been reclaimed and may be
   overwritten by the next function call — a dangling pointer.
   Dereferencing it is undefined behavior.
*/   
int main(void){

    stackversion();

    point3D *ptr = heapversion();
    if(ptr == NULL) return 1;
    printf("----for heap---\n\n");
    for(int i = 0 ; i<5; i++){
        printf("for index = %d\nx = %d\ty = %d\tz = %d\n",i,ptr[i].x,ptr[i].y,ptr[i].z);
        printf("\n");
    }
    free(ptr);
    return 0;


}
