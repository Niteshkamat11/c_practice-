#include <stdio.h>
int main(){
    int income ;
    float tax;
    printf("Enter the income : ");
    scanf("%d",&income);
    if(income < 750){
        tax = income + (1.0/100)*income;
        printf("the tax you have to pay is %.3f\n " , tax);
    }
    else if(income >=750 && income < 2250 ){
        tax = 7.50 + (2.0/100)*( income - 750 );
        printf("the tax you have to pay is : %.2f\n",tax);
    }
    else if (income >= 2250 && income < 3750){
        tax = 37.50 + (3.0/100) *(income - 2250);
        printf("the tax you have to pay is : %.2f\n",tax);
    }
    else if (income >= 3750 && income < 5250){
        tax = 82.50 + (4.0/100)* (income - 3750);
        printf("the tax you have to pay is : %.2f\n",tax);
    }
    else if (income >= 5250 && income < 7000){
        tax = 142.50 + (5.0/100) * (income - 5250);
        printf("the tax you have to pay is : %.2f\n",tax);
    }
    else {
        tax = 230.00 + (6.0/100) * (income -7000);
        printf("the tax you have to pay is : %.2f\n",tax);
    }

}
