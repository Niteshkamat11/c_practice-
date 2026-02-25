#include<stdio.h>
int main(){
    int minute ,hour;

    printf("enter the time (HOUR:MIN) ");
    scanf("%d : %d",&hour,&minute);
    if(hour==12){
        printf("Equivalent 12-hour time : 12 : %.2d PM\n", minute);
    }
    else if (hour == 0) {
        printf("Equivalent 12-hour time : 12 : %.2d AM\n", minute);        
    }
    else if (hour < 12 ){
        printf("Equivalent 12-hour time : %.2d : %.2d AM\n",hour, minute);
    }
    else{
        hour = hour -12;
        printf("Equivalnet 12-hour time :  %.2d : %.2d PM\n ",hour,minute );
        }
}    
