#include <stdio.h>

int main() {
    int R1, C1, R2, C2;
    scanf("%d %d", &R1, &C1);
    scanf("%d %d", &R2, &C2);

    if (C1 != R2) {
        printf("Matrix multiplication not possible\n");
        return 0;
    }

    int MAT1[R1][C1], MAT2[R2][C2], MAT[R1][C2];

    // Input Matrix 1
    for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C1; j++) {
            scanf("%d", &MAT1[i][j]);
        }
    }

    // Input Matrix 2
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

    // Matrix multiplication
    for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C2; j++) {
            for (int k = 0; k < C1; k++) {
                MAT[i][j] += MAT1[i][k] * MAT2[k][j];
            }
        }
    }

    // Print result
    for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C2; j++) {
            printf("%4d", MAT[i][j]);
        }
        printf("\n");
    }

    return 0;
}
