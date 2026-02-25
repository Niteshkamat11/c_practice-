// #include <stdio.h>
// int main(){
//     int n,q,r,fq,qf,rq,fq1;
//     printf("Enter the three digit number : ");
//     scanf("%d",&n);
//     q=n/10; // if input is 123 then 12
//     r=n%10;//3
//     fq=q/10;//1
//     fq1=q%10;//2
//     qf=(fq1*10)+fq;
//     rq=(r*100)+qf;
//     printf("The reverse number is :%d\n",rq);
//     return 0;

// }
//
//
#include <stdio.h>

int main() {
    int d1, d2, d3;

    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &d1, &d2, &d3);

    printf("The reversal is: %d%d%d\n", d3, d2, d1);

    return 0;
}

