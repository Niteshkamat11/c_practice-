/*
#include<stdio.h>
#include<math.h>
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

#include <stdio.h>
int main() {
  int i = 9384;
  do{
      printf("%d\n",i);
      i /= 10;
  } while(i > 0);
} 


// / #include <stdio.h>
// int main() {
//   int i;
//   int j;

//   for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1)
//     printf("%d\n", i);
// }
