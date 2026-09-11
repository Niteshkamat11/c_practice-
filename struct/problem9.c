/*
 *
 typedef struct {
    char *name;
} Person;

Person *p = malloc(sizeof(Person));
p->name = malloc(20);
strcpy(p->name, "Alice");

free(p->name);
free(p);

printf("%s\n", p->name);   // what's wrong here? THREE things, actually.
    Find ALL THREE bugs in this snippet (there's more than one danger stacked here).
    Write the corrected version.                       
*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 typedef struct {
    char *name;
} Person;

 
int main(){
    Person *p = malloc(sizeof(Person));

    p->name = malloc(20);
    strcpy(p->name, "Alice");

    printf("%s\n", p->name);   // what's wrong here? THREE things, actually.
    free(p->name);
    free(p);
                               // it is trying use the memory that already been freedup voilating the use-after-free concept.
                               //so i am gonna move it up before it is been freed up 
    /*
     another error i found was that it was not in main function every stuff was global so i put 
     them in main function . */
}
