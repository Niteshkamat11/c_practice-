#include <stdio.h>
int main(void) {
  int d;
  int n;
  printf("enter the integer : ");
  scanf("%d", &n);
  for (d = 2; d < n; d++) {
      if (n % d == 0)
         break;
  }

  if (d < n) {
      printf("%d is divisible by %d\n", n, d);
  }else {
      printf("%d is prime number\n", n);
    }
}
