#include "student.h" //must have header file mentioned 
void birthday ( student *s){
    s->age++;
}
void show(student *s){
    printf("Name:%s\n",s->name);
    printf("AGE:%d\n",s->age);
    printf("grade:%f\n",s->grade);
}
void update_grade (student *s , float new_grade){
    s->grade= new_grade;
}
