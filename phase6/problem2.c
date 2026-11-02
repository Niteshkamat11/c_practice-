/*Problem 2 — Callback With Early Exit
Write int findFirst(int *arr, int size, int (*condition)(int)) that returns the FIRST element
for which condition(element) returns true (non-zero), or -1 if none match.
Write condition functions isEven and isNegative.
*/
#include<stdio.h>
int findfirst(int *arr , int size , int (*condition)(int)){
   for(int i = 0 ; i<size ; i++){
        if(condition(arr[i]) == 1){
            return arr[i];
        }
   }
   return 0;
}
int iseven(int a){
    return (a%2) == 0? 1 : 0; 
}
int isNegative(int a){
    return (a<0)?1:0;
}
int main(){
    int nums[]= {1,3,6,-7,9};
   int result =  findfirst(nums, 5 , iseven );

   if(result == 0 ){
       printf("no match found:\n ");
   }else{
       printf("even number = %d\n",result);
   } 
   result = findfirst(nums , 5 , isNegative);

   if(result == 0 ){
       printf("no match found:\n ");
   }else{
       printf("Negative number = %d\n",result);
   }

   return 0;
}
