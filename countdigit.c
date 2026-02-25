#include<stdio.h>
int main(){
    int n,count;
    scanf("%d",&n);
    if (n<0)
        n=-n;
    if(n==0)
        count = 1;
    while(n>0){
        n/=10;
        count++;
    }
    printf("The number of digit is : %d\n",count);
        
}
