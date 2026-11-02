/*
 Write void applyToArray(int *arr, int size, int (*transform)(int)) that applies a transform function to EVERY element of
 an array IN PLACE (modifying the original array). 
 Write TWO transform functions (double_val, negate) and test both.
 */
#include<stdio.h>
void applyToArray(int *arr, int size, int (*transform)(int)) {
    for(int i = 0 ; i<size ; i++){
        arr[i] = transform(arr[i]);
    }
}

int double_val(int a){
    return a*2;
}
int negate(int a){
    return -a;
}
int main(){
    int nums[3] = {1,2,3};
    applyToArray(nums, 3 , double_val);

    for(int i =  0 ; i<3 ; i ++){
        printf("%d\t" , nums[i]);
    }
    printf("\n\n");
    applyToArray(nums, 3 , negate);
    for(int i =  0 ; i<3 ; i ++){
        printf("%d\t" , nums[i]);
    }
    return 0;
}
