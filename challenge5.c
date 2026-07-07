#include<stdio.h>

typedef enum{
    A,
    B,
    C,
    D,
    F
}grade;

typedef struct {
    char name[20];
    int score;
}student;

grade calculategrade(int score){
    if(score>=90) 
        return A;
    else if(score >=80 && score<=89) 
        return B;
    else if(score >=70 && score<=79)
        return C;
    else if(score >=60 && score<=69)
        return D;
    else
        return F; 
}

void printreport(student *students , int size){
    
    for(int i = 0; i<size;i++){

        int c = calculategrade((students+i)->score);

        printf("name : %s\t score = %d\t grade : %d\n",students[i].name,students[i].score , c);

    }    
}
int main(){
    student s1[5] = {
        {"nitesh",90},
        {"rushal",81},
        {"john",79},
        {"Doe",65},
        {"alice",59}
    };
    int result = calculategrade(70);
    printf("the result is : %d\n",result);

    printreport(s1 , 5 );

}

    
