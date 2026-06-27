#include<stdio.h>
void printaddress(void *p);
int main(){
    // int x = 5;
    // char c = 'A';
    // double d = 3.14;

    // printaddress(&x);
    // printaddress(&c);
    // printaddress(&d);



// }

// void printaddress ( void *p){
    // printf("%p\n",p); // prints the addresss 
    int x = 42;
    void *vp = &x;
    int *ip = (int*)vp;

    printf("%d\n",*ip);
}
