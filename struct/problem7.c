#include<stdio.h>
#include<stdlib.h>
typedef struct {
    int x, y;
} Point2D;

typedef struct {
    Point2D center;
    float radius;
} Circle;


/*
 Write Circle *createCircle(int cx, int cy, int radius) that heap-allocates 
 ONE Circle (only ONE malloc needed — why only one, unlike Problem 3?).
 Explain in a comment why this struct does NOT need a separate malloc
 for center, contrasting with Problem 3's Engine*.
 */

Circle *createCircle(int cx,int cy,float radius){
    Circle *ptr = malloc(sizeof(Circle)); 
    /* Only one malloc needed: center is EMBEDDED (a Point2D value, not a
   pointer), so sizeof(Circle) already includes space for it.
   In Problem 3, engine was an Engine * (a pointer field), so the
   Car only stored an address — the Engine itself needed its own malloc. */   
    if(ptr == NULL) return NULL;
    ptr->center.x = cx;
    ptr->center.y = cy;
    ptr->radius = radius;
    return ptr;
}
int main(void){


    Circle *ptr = createCircle(5,4,3.14);

    if(ptr == NULL)
        return 1;

    printf("x=%d\ty=%d\tradius=%.2f\n",ptr->center.x,ptr->center.y,ptr->radius);
    free(ptr);
    return 0;

}
