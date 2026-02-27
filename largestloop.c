#include<stdio.h>
int main(void){
    float largest = 0.0f;
    float n;
    for(;;){
        printf("Enter the program: ");
        scanf("%f",&n);
        if(n<=0)
            break;
        if(n>largest)
            largest = n;
    }
    printf("The largest number is : %.2f\n",largest);
    return 0;
}
