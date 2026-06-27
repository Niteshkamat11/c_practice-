//A struct is a custom variable type you design yourself that holds multiple values together.

/*
#include <stdio.h>
struct person {
    char name[20];
    int age;
    float score;

};
//set the value
int main(){
    struct person p1;
    p1.age = 24;
    p1.score = 90.1;

    printf("AGE IS : %d\n",p1.age);
    printf("SCORE IS : %.1f\n", p1.score);
    return 0;
}
*/

/*
#include<stdio.h>
typedef struct {
    int acc_number;
    double balance;
}bankaccount;

void show(bankaccount *acc){
    printf("the balance : %lf\n ", acc->balance);
    printf("the acc_number : %d\n ", acc->acc_number);
}
void deposit (bankaccount *acc , double amount){
    acc->balance = acc->balance + amount;
}
int main(){
    bankaccount b1;
    b1.acc_number = 1001;
    b1.balance = 500.0;
    printf("before updation\n");
    show(&b1);

    printf("after updation\n"); 
    deposit(&b1,500.0);
    show(&b1);
}
*/
#include<stdio.h>
#include <string.h>
typedef struct{
    char name[50];
    int age;
    float grade;
}student;

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
int main(){
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



