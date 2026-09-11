#include<stdio.h>
#include<stdlib.h>
typedef struct {
    int id;
} User;

void processUser(User *u) {
    printf("Processing user %d\n", u->id);
    // free(u); commenting out this for better visibility 
}

int main() {
    User *u = malloc(sizeof(User));
    u->id = 5;
    processUser(u);
    // BUG IS HERE — find it, explain it, fix it
    free(u); /* this is the bug because it is trying to 
              free the memeory which is already freed up in function called processUser 
              so better it is to free the memory in main by deleting free(u) in function callled
              processUser so i commented that part in function for visibility. */
    u = NULL;
    return 0;
}

