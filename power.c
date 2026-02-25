#include <math.h>
#include <stdio.h>
int main() {
  int a;
  int b, c;
  printf("Enter the value of a:");
  scanf("%d",&a);
  printf("Enter the value of b:");
  scanf("%d",&b);
  c = pow(a, b);
  printf("the power of a to the b is: %d\n", c);
}
