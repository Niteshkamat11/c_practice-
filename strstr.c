#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "hello, world" ;// we gonna use strstr function which is used for finding sub string 
    char *p;
    p=(strstr(str,"world"));// returs address when it matches that means it retures the address of 'w'
    printf("%s\n",p);
}
