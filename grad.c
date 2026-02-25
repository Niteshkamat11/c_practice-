#include <stdio.h>
int main() {
  int num;
  printf("Enter numerical grade : ");
  scanf("%d", &num);
  int grade = num / 10;
  switch (grade) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
    printf("letter grade : F\n");
    break;

  case 6:
    printf("letter grade : D\n");
    break;

  case 7:
    printf("letter grade : C\n");
    break;

  case 8:
    printf("letter grade : B\n");
    break;

  case 9:
  case 10:
    printf("letter grade : A\n");
    break;

  default:
    printf("EROOR MESSAGE\n");
  }
}
