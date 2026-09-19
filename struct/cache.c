/*
 Struct Cache with a FIXED-size array of 5 char *entries (all initially NULL).
Write void addToCache(Cache *c, char *newEntry) that: if a slot is NULL, malloc+strcpy into it;
if ALL slots are full, free() the OLDEST entry and replace it (simple fixed-size cache eviction). 
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    int oldest_entry;
    int count ;
    char *entry[5];
}cache;

void addToCache(cache *c , char *new_entry){

    for ( int i = 0 ; i<5 ; i++){
        if(c->entry[i] == NULL){
            c->entry[i] = malloc(strlen(new_entry)+1);

            if(!c->entry[i]) return;
            strcpy(c->entry[i] , new_entry);
            c->count++;
            return;
        }
    }

    char *temp = malloc(strlen(new_entry)+1);
    if(!temp) return ;

    free(c->entry[c->oldest_entry]);

    c->entry[c->oldest_entry] = temp;

    strcpy(c->entry[c->oldest_entry],new_entry);

    c->oldest_entry=(c->oldest_entry +1 ) % 5; 
}

void printentry(cache *c){
    if(!c) return;
    for(int i = 0 ; i <c->count ; i++){
        printf("%s\n",c->entry[i]);
    }
}

void freememory(cache **c){
    if(!c || !*c) return;

    for(int i = 0 ; i<5 ; i++){
        free((*c)->entry[i]);
    }
    free(*c);
    *c = NULL;

}

int main(void){
    cache *c = malloc(sizeof(cache));
    if(!c) return 1;

    c->count = 0;

    for(int i = 0 ; i<5 ; i++){
        c->entry[i] = NULL;
    }
    c->oldest_entry = 0;

    addToCache(c , "https://niteshkamat.com.np");
    addToCache(c , "https://rushalparajuli.com.np");
    addToCache(c , "https://surajbhattrai.com.np");
    addToCache(c , "https://suyogmauni.com.np");
    addToCache(c , "https://soumyadahal.com.np"); //upto here the 5 slot is filled count is 5 now and c->oldest_entry = 0;
    addToCache(c , "https://subijdhital.com.np"); //fills 0 index overwiting earlier 0 index entry and now c->oldest_entry = 1
    addToCache(c , "https://sanskararyal.com.np"); //oldest_entry = 2
    addToCache(c , "https://sahityabhujel.com.np"); //oldest_entry = 3
    addToCache(c , "https://roshanpandey.com.np"); //oldest_entry = 4
    addToCache(c , "https://sahildahal.com.np"); //oldest_entry = 5
    addToCache(c , "https://hero.com.np"); // here the problem arises making oldest_entry = 6 which is out of bound as array total size is only 5 so we have 
                                                 // to bring it to 0 
                                                   
    printentry(c);
    freememory(&c);

    return 0;
}
