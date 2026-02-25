/*
#include<stdio.h>
int main(void){
    int d,i1,i2,i3,i4,i5,j1,j2,j3,j4,j5,first_sum,second_sum,total;
    printf("Enter the first (single) digit : ");
    scanf("%1d",&d);
    printf("Enter the first group of five digit : ");
    scanf("%1d%1d%1d%1d%1d",&i1,&i2,&i3,&i4,&i5);
    printf("Enter the second group of five digit : ");
    scanf("%1d%1d%1d%1d%1d",&j1,&j2,&j3,&j4,&j5);
    first_sum = d+i2+i4+j1+j3+j5;
    second_sum = i1+i3+i5+j2+j4;
    total = 9 - ((((first_sum * 3) + second_sum ) -1) % 10);
    printf("the check digit is : %d\n", total);
    return 0;
    
}
*/
/*
#include <stdio.h>

int main(void) {
    int digits[11];  // store the first 11 digits
    int i, first_sum = 0, second_sum = 0, total;

    printf("Enter the first 11 digits of a UPC: ");

    // read 11 digits as individual integers into the array
    for (i = 1; i < 12; i++) {
        scanf("%1d", &digits[i]);
    }

    // first sum: d + i2 + i4 + j1 + j3 + j5
    first_sum  = digits[1] + digits[3] + digits[5] + digits[7] + digits[9] + digits[11];

    // second sum: i1 + i3 + i5 + j2 + j4
    second_sum = digits[2] + digits[4] + digits[6] + digits[8] + digits[10];

    // compute check digit
    total = 9 - ((((first_sum * 3) + second_sum) - 1) % 10);

    printf("Check digit: %d\n", total);

    return 0;
}
*/
// this is upc which is uses 11 digit but european countries uses 12 digit lets calculate for 12 digit
//
#include <stdio.h>

int main(void) {
    int digits[12];  // store the first 11 digits
    int i, first_sum = 0, second_sum = 0, total;

    printf("Enter the first 11 digits of a UPC: ");

    // read 11 digits as individual integers into the array
    for (i = 0; i < 12; i++) {
        scanf("%1d", &digits[i]);
    }

    // first sum: d + i2 + i4 + j1 + j3 + j5
    first_sum  = digits[0] + digits[2] + digits[4] + digits[6] + digits[8] + digits[10] ;

    // second sum: i1 + i3 + i5 + j2 + j4
    second_sum = digits[1] + digits[3] + digits[5] + digits[7] + digits[9];

    // compute check digit
    total = 9 - ((((first_sum * 3) + second_sum) - 1) % 10);

    if (total == digits[11]){

        printf("Check digit: %d and it is valid\n", total);

    }else{
        printf("INVALID\n");
    }


    return 0;
}

