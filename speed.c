#include<stdio.h>
int main(){
    int speed;
    printf("Enter the speed ");
    scanf("%d",&speed);
    if (speed <1)
        printf("calm\n");
    else if (speed >=1 && speed <= 3)
        printf("light air\n");
    else if (speed >=4 && speed <=27)
        printf("breeze\n ");
    else if (speed >=28 && speed <=47)
        printf("Gale\n ");
    else if (speed >=48 && speed <=63)
        printf("storm\n ");
    else {
        printf("Hurricance");
    }
}
