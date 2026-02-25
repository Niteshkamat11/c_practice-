#include <stdio.h>
#include <math.h>

int main(void)
{
    double a, b, result;
    int option;

    printf("Choose operation:\n");
    printf("1: Add\n");
    printf("2: Minus\n");
    printf("3: Multiply\n");
    printf("4: Divide\n");
    printf("5: Power\n");

    printf("Enter your option: ");
    scanf("%d", &option);

    if (option >= 1 && option <= 5)
    {
        printf("Enter first number: ");
        scanf("%lf", &a);

        printf("Enter second number: ");
        scanf("%lf", &b);
    }

    switch (option)
    {
        case 1:
            result = a + b;
            printf("Result: %.10g\n", result);
            break;

        case 2:
            result = a-b;
            printf("Result: %.10g\n", result);
            break;

        case 3:
            result = a - b;
            printf("Result: %.10g\n", result);
            break;

        case 4:
            if (b == 0)
                printf("Error: Division by zero.\n");
            else
                printf("Result: %.10g\n", a / b);
            break;

        case 5:
            printf("Result: %.10g\n", pow(a, b));
            break;

        default:
            printf("Invalid option.\n");
    }

    return 0;
}

