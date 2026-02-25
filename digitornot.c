/*
#include <stdio.h>
#include<math.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("the smallest number is :%d\n",(a<b) ? a:b);
}
*/

/*
#include<stdio.h>
#include<math.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch>='0' && ch<='9'){
        printf("The character you entered is digit\n");
    }else{
        printf("the character you entered is not digit\n");
    }
}
*/

#include<stdio.h>
#include<math.h>
int main(){
    char ch='9'; //asci value is 57 
    int m = ch -'0'; //ascii value of 0 is 48 so 57-48=9
    printf("%d\n",m);
}
