#include <stdio.h>
int main(){
    int a;
    printf("Enter the number");
    scanf("%d",&a);
    if(a%2==0){
        printf("The number you entered is even\n");
    }else{
        printf("the number you entered is odd\n");
    }
    return 0;
}
