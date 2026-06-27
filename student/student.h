#ifndef STUDENT_H // just a lable prevent the header file to load twice if not define then it define in 2nd line
#define STUDENT_H

#include <stdio.h>
#include <string.h>
//header file must have three things : struct , function with no calculation part , and #endif and all the library like string.h stdio.h
typedef struct {
    char  name[50];
    int   age;
    float grade;
} student;

void show(student *s);
void birthday(student *s);
void update_grade(student *s, float new_grade);
#endif
