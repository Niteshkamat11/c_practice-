#include<stdio.h>
#include<string.h>


typedef enum{
    ACTIVE,
    INACTIVE,
    BANNED
}status;

typedef struct{
    char name[20];
    status status;

}user;

void banuser(user *c){

    c->status = BANNED;

}
int main(){
    user u1;

    strcpy(u1.name, "john");
    u1.status = ACTIVE;

    banuser(&u1);

    printf("%s status: %d\n", u1.name, u1.status);   // should print "John status: 2"


}
