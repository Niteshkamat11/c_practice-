#include <math.h>
#include <stdio.h>
int main() {
  int a;
  printf(
      "Enter the number you want to check if it is divisible by 2 or not :\n");
  scanf("%d", &a);
  if (a % 2 == 0) {
    printf("the number you entered is divisible by 2 \n");
  } else {
    printf("The number is not divisible by 2\n");
    }
}  
