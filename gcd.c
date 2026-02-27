// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("Enter the two number you want to find gcd of : ");
//     scanf("%d %d",&a,&b);
//     while(b != 0){
//         int temp = b;
//         b=a%b;
//         a=temp;

//     }
//     printf("%d",a);
// }



/* Below is for the lowest term of fraction which is obtained by diving numerator and denominator by gcd */
#include <stdio.h>
int main(){
    int a,b;
    printf("enter the fraction : ");
    scanf("%d/%d",&a,&b);
    int m = a;
    int n = b;
    for (;n!= 0;){
        int temp = n;
        n = m%b;
        m = temp;

    }
    printf("the gcd is : %d\n",m);
    printf("the lowest term is :%d/%d\n",a/m,b/m);

}
