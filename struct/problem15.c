/*
  Deliberately write a function with a memory leak involving a struct with TWO pointer fields
(like Book's title, but add a second char *author too) where you only free ONE of the two fields.
Then fix it.

 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    char *title;
    char *author;
}Book;

int storedata(Book *ptr,char *title , char *author){
    ptr->title = malloc(strlen(title)+1);

    if(!(ptr->title)) return 0;

    strcpy(ptr->title , title);
    ptr->author = malloc(strlen(author)+1);
    if(!(ptr->author)) {
        free(ptr->title);
        ptr->title = NULL;
        return 0;
    }
    strcpy(ptr->author , author);
    return 1;

}

void freemem(Book **ptr){
    free((*ptr)->title); //okay i freedup title but i will not free author intentionally according to question
    free((*ptr)->author);// commented intentionally
    free(*ptr);

    *ptr = NULL;
}
void printstruct(Book *ptr ){
    puts(ptr->title);
    puts(ptr->author);
}
int main(void){

    Book *ptr = malloc(sizeof(Book));
    if(!ptr){
        printf("malloc of struct failed\n");
        return 1;
    }
    if(!storedata(ptr , "The stranger" , "Albert camus")){
        freemem(&ptr);
        return 1;
    }
    printstruct(ptr);

    freemem(&ptr);

    return 0;
}
