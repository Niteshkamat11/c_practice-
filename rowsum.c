#include<stdio.h>
int main(){
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p;

    printf("Enter the 16 number in anyorder you like: ");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l,&m,&n,&o,&p);

    printf("\n");

    printf("%d %d %d %d \n%d %d %d %d \n%d %d %d %d \n%d %d %d %d\n",a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p);
    printf("\n");
    printf("row_sum: %d %d %d %d\n",a+b+c+d,e+f+g+h,i+j+k+l,m+n+o+p);
    printf("diagnol: %d %d\n",a+f+k+p,d+g+j+m);
    printf("column sums : %d %d %d %d\n ",a+e+i+m,b+f+j+n,c+k+o+g,d+h+l+p);


}
