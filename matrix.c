#include <stdio.h>

int main(void) {
    // 1. Declare two input matrices and one to store the result
    int matrixA[2][2];
    int matrixB[2][2];
    int result[2][2] = {0}; // Initialize result matrix with zeros

    // 2. Input for Matrix A
    printf("Enter 4 elements for Matrix A:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &matrixA[i][j]);
        }
    }

    // 3. Input for Matrix B
    printf("Enter 4 elements for Matrix B:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &matrixB[i][j]);
        }
    }

    // 4. Matrix Multiplication Logic
    // i tracks rows of Matrix A, j tracks columns of Matrix B
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            // k moves across A's row and down B's column simultaneously
            for (int k = 0; k < 2; k++) {
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    // 5. Printing the Result Matrix nicely
    printf("\nResultant Matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", result[i][j]); // \t keeps them on the same line
        }
        printf("\n"); // This prints a new line ONLY after a full row is done
    }

    return 0;
}

