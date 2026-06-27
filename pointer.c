// #include<stdio.h>
//
// int main(void){
//     int age = 25;
//     int *ptr = &age;
//     printf("the value of age is %d\n",age);
//     printf("the address  of age is %p\n",&age);
//     printf("the address of age using pointer is %p\n",ptr);
//     printf("the value of age using pointer is %d\n",*ptr);



//     *ptr = 50;
//     printf("age value is changed to : %d\n",age);
//     return 0;
// }
#include<stdio.h>
#include<stdlib.h>
//void allocatememory(int **p);
// void swap(int *a , int *b);

//int main(void){
    // int score = 10;
    // int *rank = &score;
    // printf("the value of score is %d\n",score);
    // printf("the address of score is %p\n",&score);
    // printf("the address of score is %p\n",rank);
    // printf("the value of score is %d\n",*rank);
    // printf("the value of score is %p\n",&rank);

    // *rank = 90
    //     ;
    // printf("the value of score is now: %d\n",score);
    //
    //
    // int *ptr;
    // allocatememory(&ptr);
    // printf("%d",*ptr);
    //
    // int x = 5;
    // int y = 7;
    // swap(&x,&y);
    // printf("x = %d\n y = %d\n",x,y);
    

// }
// void swap(int *a , int *b){
//     int temp = *a; 
//     *a = *b; 
//     *b=temp;
// }
// void allocatememory(int **p){
//     *p = malloc(sizeof (int));
//     **p = 42 ; 
// }
/*
 *
 */
int main(void){
    char buffer[5];
    buffer[0]='C';
    buffer[1]='a';
    buffer[2]='t';
    buffer[3]='\0';

    printf("%s\n",buffer);
    printf("%lu\n",sizeof(buffer));

}
