#include "student.h" //header file must be mentioned 
#include<stdio.h>

#include <string.h>
int main(){ //main is used for calling all the function in student.c
    student s1;
    strcpy(s1.name , "Nitesh");

    s1.age= 23;
    s1.grade = 88.3;
    printf("before updation:\n");
    show(&s1);
    printf("Happy birthday\n");
    birthday(&s1);
    update_grade(&s1,90.2);
    show(&s1);
}

