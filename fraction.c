#include<stdio.h>
int gcd(int a , int b){

    while(b!=0){

        int temp = b;

        b=a%b;

        a=temp;
    }
    return a;
}
int main(){
    int num, deno, num1,deno1, num_result ,deno_result;

    printf("enter the first and second number in fraction : ");
    scanf("%d/%d + %d/%d",&num,&deno,&num1,&deno1);

    // printf("enter the second fraction in fraction : ");
    // scanf("%d/%d",&num1,&deno1);

    num_result = num*deno1 + num1*deno;

    deno_result= deno * deno1;

    int divisor=gcd(num_result,deno_result);

    num_result=num_result/divisor;

    deno_result = deno_result / divisor;      

    printf("The sum of two fraction is : %d/%d\n",num_result,deno_result);
    
    return 0;


}
