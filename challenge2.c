#include<stdio.h>
typedef struct {
    char title[50];
    int pages;
} Book;

Book *findLongestBook(Book *books, int size) {
    Book *highest = books;
   for(int i = 0; i<size ; i++){

       if((books[i].pages) > (highest->pages)){

           highest = &books[i];

       }  
   } 
   return highest;
}

int main() {
    Book library[3] = {
        {"C Programming", 300},
        {"Pointers Deep Dive", 500},
        {"Structs 101", 150}
    };

    Book *longest = findLongestBook(library, 3);
    printf("Longest book: %s (%d pages)\n", longest->title, longest->pages);
}
