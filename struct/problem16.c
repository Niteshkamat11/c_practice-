/*
 Struct Wrapper containing void *data (generic pointer) and an enum {INT_TYPE, STRING_TYPE} type tag. 
Write a freeWrapper function that correctly frees data regardless of which type it actually is
(the freeing mechanism doesn't need to differ, but reasoning about WHY void* can be freed generically
is the point — explain in a comment).

 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef enum {
    INT_TYPE,
    STRING_TYPE
} DataType;

typedef struct {
    DataType type;  // The tag telling us what is inside 'data'
    void *data;     // The raw memory pointer
} Wrapper;

void freewrapper(Wrapper **p){
    free((*p)->data);
    free(*p);
    *p = NULL;

/* free() only needs an address to release memory — it doesn't care
 what TYPE of data lived there. malloc's internal bookkeeping tracks
 SIZE and ADDRESS, not the original type. This is exactly why data
 can be declared void* (type-erased) and freewrapper can free it
 generically, without needing to check w->type at all — freeing
 is purely an address/size operation, unlike READING the data
 (printWrapper), which DOES need the type tag to know how to
 INTERPRET those bytes (as an int vs as a string).
*/
}

int addstring(Wrapper *ptr, const char *str) {
    ptr->type = STRING_TYPE; // 1. Set the tag
    
    ptr->data = malloc(strlen(str) + 1); // 2. Allocate enough bytes for string
    if (!ptr->data) return 0;

    strcpy((char *)ptr->data, str);
    return 1;
}

int addInt(Wrapper *ptr, int val) {
    ptr->type = INT_TYPE; // 1. Set the tag
    
    ptr->data = malloc(sizeof(int)); // 2. Allocate 4 bytes for int
    if (!ptr->data) return 0;

    *(int *)(ptr->data) = val;
    return 1;
}

void printWrapper(Wrapper *w) {
    if (!w || !w->data) return;

    switch (w->type) {
        case INT_TYPE:
            printf("Integer value: %d\n", *(int *)(w->data));
            break;

        case STRING_TYPE:
            printf("String value: %s\n", (char *)(w->data));
            break;
    }
}

int main(){
   Wrapper *ptr = malloc(sizeof(Wrapper));

   if(!ptr) return 1;

   if(!addstring(ptr , "still loving you")){
       freewrapper(&ptr);
       return 1;
   }
   printWrapper(ptr);
   freewrapper(&ptr);
    return 0;
}
