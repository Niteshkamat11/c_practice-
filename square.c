/*
 * This is the clearner version for finding the square by multplication of square:
#include <stdio.h>
int main(void ){
    int a;
    int sum = 0;
    printf("Enter the number : ");
    scanf("%d",&a);
    for(int i = 1; i<=a ; i++){
        printf("%d square is %d\n",i,i*i);
    }
    return 0;
}
*/
#include <stdio.h>
int main(void){
    int a;
    int odd =3;
    int square ;
    int i =1;
    printf("Enter the number : ");
    scanf("%d",&a);
    for(square = 1 ; i<=a; odd+=2 ){
        printf("%d square is %d\n",i,square);
        square += odd;
        ++i;
    }
    return 0;
}


