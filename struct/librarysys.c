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

void addbook(library *lib , char *title , int pages){

    if(lib->count == lib->capacity){
        lib->capacity *= 2;
        Book **temp = realloc(lib->books , ((lib->capacity) * sizeof(Book*)));
        if(temp == NULL){
            free(lib);
            return ;
        }
        lib->books = temp;
    }

    lib->books[lib->count] = malloc(sizeof(Book));
    if(lib->books[lib->count] == NULL) return;


    lib->books[lib->count]->title = malloc(strlen(title)+1);

    if(lib->books[lib->count]->title == NULL) {
        free(lib->books[lib->count]);
        return;
    };

    strcpy(lib->books[lib->count]->title , title);

    lib->books[lib->count]->pages = pages;

    (lib->count)++;
}

void display(library *lib){

    for(int i = 0 ; i <lib->count ; i++){

        printf("title = %s\npages = %d\n",lib->books[i]->title,lib->books[i]->pages);

        printf("\n");
    }


}

void destroylibrary(library **lib){

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
    addbook(lib , "crime and punishment",500);
    addbook(lib , "The stranger",150);

    display(lib);
    destroylibrary(&lib);
}
