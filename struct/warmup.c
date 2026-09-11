/*
 Problem 1 — Basic Struct + Heap (Warm-up)

Create a struct Point3D with x, y, z (all ints).
Write Point3D *createPoint(int x, int y, int z) that heap-allocates a Point3D,
fills it in, and returns it. Write void printPoint(Point3D *p) to display it. Test in main.
*/

#include<stdio.h>
#include<stdlib.h>
 typedef struct{
    int x,y,z;
}point3D;

point3D *createpoint (int x , int y, int z){
    point3D *p = malloc(sizeof(point3D));
    if(p == NULL) return NULL;
    p->x=x;
    p->y=y;
    p->z=z;
    return p;
}

void printpoint(point3D *p){
    printf("x = %d\ny = %d\nz = %d\n",p->x,p->y,p->z);

}

int main(){
    point3D *p = createpoint(5,6,7);
    if(p ==NULL){
        printf("createpoint function failed\n");
        return 1;
    }
    printpoint(p);
    free(p); 
    return 0;
}
