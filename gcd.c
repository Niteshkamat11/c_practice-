#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the two number you want to find gcd of : ");
    scanf("%d %d",&a,&b);
    while(b != 0){
        int temp = b;
        b=a%b;
        a=temp;

    }
    printf("%d",a);
}
