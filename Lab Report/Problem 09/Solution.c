#include <stdio.h>

int main() {
    int R1, C1, R2, C2;
    int i, j, k;

    // Input matrix sizes
    printf("Enter number of rows and columns of matrix A: ");
    scanf("%d %d", &R1, &C1);

    printf("Enter number of rows and columns of matrix B: ");
    scanf("%d %d", &R2, &C2);

    // Check multiplication condition
    if (C1 != R2) {
        printf("Matrix multiplication not possible!\n");
        return 0;
    }

    int A[R1][C1], B[R2][C2], PROMAT[R1][C2];

    // Input matrix A
    printf("\nEnter elements in matrix A:\n");
    for (i = 0; i < R1; i++) {
        for (j = 0; j < C1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input matrix B
    printf("\nEnter elements in matrix B:\n");
    for (i = 0; i < R2; i++) {
        for (j = 0; j < C2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Multiply matrices
    for (i = 0; i < R1; i++) {
        for (j = 0; j < C2; j++) {
            PROMAT[i][j] = 0;
            for (k = 0; k < C1; k++) {
                PROMAT[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Output PROMAT matrix
    printf("\nProduct of A * B =\n");
    for (i = 0; i < R1; i++) {
        for (j = 0; j < C2; j++) {
            printf("%4d", PROMAT[i][j]);
        }
        printf("\n");
    }

    return 0;
}
