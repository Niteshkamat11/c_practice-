#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct{
    char *title;
    int pages;
}Book;

typedef struct{
    Book **books;
    int  count;
    int capacity;
}library;

library *createlibrary(int initialcapacity){

    library *ptr = malloc(sizeof(library));

    if(ptr== NULL) return NULL;

    ptr->books = malloc(initialcapacity * sizeof(Book*));

    if(ptr->books == NULL) {free(ptr); return NULL;}

    ptr->count = 0;

    ptr->capacity = initialcapacity; 

    return ptr;

}

int addbook(library *lib , char *title , int pages){
    if(lib==NULL || title == NULL) return 0;
    if(lib->count == lib->capacity){
        int new_capacity = lib->capacity * 2;
        Book **temp = realloc(lib->books , ((new_capacity) * sizeof(Book*)));
        if(temp == NULL){
            return 0 ;
        }
        lib->capacity = new_capacity;
        lib->books = temp;
    }

    lib->books[lib->count] = malloc(sizeof(Book));
    if(lib->books[lib->count] == NULL) return 0;


    lib->books[lib->count]->title = malloc(strlen(title)+1);

    if(lib->books[lib->count]->title == NULL) {
        free(lib->books[lib->count]);
        return 0;
    };

    strcpy(lib->books[lib->count]->title , title);

    lib->books[lib->count]->pages = pages;

    (lib->count)++;
    return 1;
}

void display(library *lib){

    for(int i = 0 ; i <lib->count ; i++){

        printf("title = %s\npages = %d\n",lib->books[i]->title,lib->books[i]->pages);

        printf("\n");
    }
}

void destroylibrary(library **lib){

    if(lib==NULL|| *lib == NULL) return;

    for(int i = 0; i<(*lib)->count ; i++){
        free((*lib)->books[i]->title);

        free((*lib)->books[i]);
    }

    free((*lib)->books);

    free(*lib); 
    *lib = NULL;
}

int main(){

    library *lib = createlibrary(2);
    if(lib ==   NULL){
        printf("create library failed :\n ");
        return 1;
    }
    if(!addbook(lib , "crime and punishment",500)||!addbook(lib, "The Stranger", 150)){

            printf("addbook failed!\n");
            destroylibrary(&lib);
            return 1;
    }
    if(!addbook(lib , "The stranger",150)){
        printf("addbook failed!\n");
        return 1;
    }

    display(lib);
    destroylibrary(&lib);
}
