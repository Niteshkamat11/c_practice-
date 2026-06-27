/*
include<stdio.h>
include<math.h>
int main(){
    printf("%d\n",8%3);
    return 0;
}
*/

// converting the float int integer forcefully by taking responsibility
/*
include<stdio.h>
 #include<math.h>
 int main(){
     int a =1.99999;
     printf("%d\n",a);
 }
*/

/*
#include<stdio.h>
#include<math.h>
int main(){
    int a = 4+9*10;
    printf("%d\n",a);
}
*/

/*
#include<stdio.h>
#include<math.h>
int main(){
    int height=9;
    float width=1.99f;

    printf("Height: %d\n length: %.2f\n",height,width);
}
*/

/*
#include <stdio.h>
#include<math.h>
int main(){
    float amount,payment,rem_balance,rate;

    printf("Enter amount of loan: ");
    scanf("%f",&amount);

    printf("Enter interest rate : ");
    scanf("%f",&rate);

    printf("Enter the monthly payment : ");
    scanf("%f",&payment);

    rate = rate/12;

    amount = amount * (rate/100) + amount;

    rem_balance = amount - payment;

    printf("Balance remaining after first payment: %.2f\n",rem_balance);

    amount = rem_balance;
    amount = amount * (rate/100) + amount;
    rem_balance = amount - payment;
    printf("Balance remaining after second payment: %.2f\n",rem_balance);

    amount = rem_balance;
    amount = amount * (rate/100) + amount;
    rem_balance = amount - payment;
    printf("Balance remaining after Third payment: %.2f\n",rem_balance);
}
*/
/*

#include<stdio.h>
int main(){
    int a=8;
    scanf("%d",&a);
    printf("images\tspecies\tsaipens\n\tdog\tpeople\n");
    printf("%d",a);

}
*/
/*
#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d %d",a,b);
}
*/

/* exercise


#include<stdio.h>
int main(){
    int i=3; int j= 2;
    int k;
    k = i * j == 6;
    printf("%d\n",k);
}
*/
/*
#include<stdio.h>
int main(){
    int i = 1; int j = 1 ,k = 1;
    printf("%d\n", ++i || ++j && ++k) ;
    printf("%d %d %d " ,i,j,k);
}
*/

// #include <stdio.h>
// int main() {
//   int i = 9384;
//   do{
//       printf("%d\n",i);
//       i /= 10;
//   } while(i > 0);
// } 


// / #include <stdio.h>
// int main() {
//   int i;
//   int j;

//   for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1)
//     printf("%d\n", i);
// }
//
//
#include<stdio.h>


// int main(void){
//     // int a = 7;
//     // int b = 2;
//     // float c = a/b;
//     // printf("%f\n",c);

//     int x = 5;
//     int y = 10;
//     int z = x + y * 2 - 3;

//     printf("%d\n", z);

//     int a = 0;
//     int b = 5;

//     if (a != 0 && b / a > 1) {
//         printf("yes\n");
//     } else {
//         printf("no\n");
//     }
// }
//
int power(int base, int exp);
int main(){
    int base;
    int exp;
    printf("enter the base:");
    scanf("%d",&base);
    printf("enter the exp:");
    scanf("%d",&exp);
    int result = power(base,exp); // calls function
    printf("the result of %d to the power of %d is : %d\n",base,exp,result);
}

int power(int base , int exp){
    if (exp==0) return 1;
    int c = base * power(base,exp-1);
    return c;
}

/*
 int fib(int n) {
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
 }

 printf("%d\n", fib(5));
 
 
 * suppse n = 5;
* fib(5) =fib(4) + fib(3)
*fib(4) =fib(3) + fib(2)
fib(3) =fib(2)+ fib(1)
fib(2) =  fib(1) + fib(0)
fib(1) = 1
fib(0) = 0
fib(2)=1
fib(3) =2
fib(4) = 2 +1 = 3
fib(5) = 3 + 2 = 5 



* */
