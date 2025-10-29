#include <stdio.h>

int main() {
    int R1, C1, R2, C2;

    // Input matrix dimensions
    printf("Enter rows and columns for Matrix A: ");
    scanf("%d %d", &R1, &C1);
    printf("Enter rows and columns for Matrix B: ");
    scanf("%d %d", &R2, &C2);

    // Check multiplication compatibility
    if (C1 != R2) {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }

    int MAT1[R1][C1], MAT2[R2][C2], MAT[R1][C2];

    // Input elements of Matrix A
    printf("Enter elements of Matrix A:\n");
    for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C1; j++) {
            scanf("%d", &MAT1[i][j]);
        }
    }

    // Input elements of Matrix B
    printf("Enter elements of Matrix B:\n");
    for (int i = 0; i < R2; i++) {
        for (int j = 0; j < C2; j++) {
            scanf("%d", &MAT2[i][j]);
        }
    }

    // Initialize result matrix to 0
    for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C2; j++) {
            MAT[i][j] = 0;
        }
    }

    // Matrix multiplication logic
    for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C2; j++) {
            for (int k = 0; k < C1; k++) {
                MAT[i][j] += MAT1[i][k] * MAT2[k][j];
            }
        }
    }

    // Display result matrix
    printf("\nProduct of Matrix A x B:\n");
    for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C2; j++) {
            printf("%4d", MAT[i][j]);
        }
        printf("\n");
    }

    return 0;
}
