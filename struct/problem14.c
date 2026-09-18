/*
 Write a function that takes a Library* (from your Problem 10) and
REMOVES a book by title (find it, free its memory, then SHIFT all later books one slot left to fill
the gap,decrement count). This is a genuinely hard pointer-shuffling problem.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
    char *title;
    int page;
}book;

typedef struct{
    book **books;
    int count ; 
    int capacity;
}library;

library *createlibrary(int initialcapacity){
    library *lib = malloc(sizeof(library));

    if(lib ==NULL){
        return NULL;
    }
   lib->books = malloc(initialcapacity * sizeof(book *));

   if(lib->books == NULL) {
       free(lib);
       return NULL;
   }
   lib->count = 0;
   lib->capacity = initialcapacity;
    return lib;
}


int addbook(library *lib , char *title , int pages){

    if(lib == NULL || title == NULL) return 0; //defense implementation

    if(lib->count == lib->capacity){
        int new_capacity = lib->capacity*2;

        book **temp = realloc(lib->books , new_capacity * sizeof(book *));

        if(!temp) return 0;

        lib->capacity = new_capacity;

        lib->books = temp;

    } // reallocation completed if count is same as capacity  

    lib->books[lib->count] = malloc(sizeof(book));
    if(lib->books[lib->count] == NULL) return 0;

    lib->books[lib->count]->page = pages;

    lib->books[lib->count]->title = malloc(strlen(title)+1);

    if(!(lib->books[lib->count]->title)){
        free(lib->books[lib->count]);
        return 0;
    }
    strcpy(lib->books[lib->count]->title , title );

    (lib->count)++;

    return 1;
}
int removebook(library *lib , char *name , int count){
    if(lib == NULL || name == NULL) return 0;
    for(int i = 0 ; i<count ; i++){

        if(!strcmp((lib->books[i]->title),name)){

            free(lib->books[i]->title);
            free(lib->books[i]);
            for(int j = i ; j<count-1 ; j++){
                lib->books[j] = lib->books[j+1];
            }
            lib->count --; //need to decrement this count as one struct is removed from array
            lib->books[lib->count] = NULL; //making last index array box to hold null resolving dangling pointer
            return 1;
        }

    }
    return 0;
}
void destroylibrary(library **lib){

    if(lib==NULL || *lib == NULL) return;

    for(int i = 0 ; i<(*lib)->count ; i++ ){
        //we have to free 3 things
        //1: the malloc which was for title 
        //2: the malloc which was for array of pointer which acts a glue 
        //3 : the whole library        
        free((*lib)->books[i]->title);
        free((*lib)->books[i]);
    }
    free((*lib)->books);
    free(*lib);
    *lib = NULL; // assining NULL to dangling pointer

}

void printbook(library *lib){
    for(int i = 0 ; i<lib->count; i++){
        printf("title = %s\npages = %d\n",lib->books[i]->title,lib->books[i]->page);
        printf("\n");
    }
}
int main(){

    library *lib = createlibrary(2);

    if(lib ==NULL) return 1;

    if(!addbook(lib ,"sapiens" , 500 )|| !addbook(lib , "crime and punishment" , 1200) || !addbook(lib,"1984",200)){
        destroylibrary(&lib);
        return 1;
    
    }

    printbook(lib);

    if(!removebook(lib ,"1984", lib->count)){
        printf("--------------------------------\n\n");
        printf("book not found\n");                
        destroylibrary(&lib);
        return 1;
    }
    printf("--------------------------------\n\n");
    printbook(lib);
    destroylibrary(&lib);

}
