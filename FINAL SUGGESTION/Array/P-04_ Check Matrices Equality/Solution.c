#include <stdio.h>

void scanmat(int R, int C, int MAT[R][C]) {
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &MAT[i][j]);
        }
    }
}

int main() {
    int R1, C1, R2, C2;

    printf("Enter rows and columns for Matrix A: ");
    scanf("%d %d", &R1, &C1);
    printf("Enter rows and columns for Matrix B: ");
    scanf("%d %d", &R2, &C2);

    if (R1 != R2 || C1 != C2) {
        printf("Matrices cannot be compared for equality (different dimensions)\n");
        return 0;
    }

    int MAT1[R1][C1], MAT2[R2][C2];

    printf("Enter elements of Matrix A:");
    scanmat(R1, C1, MAT1);
    printf("Enter elements of Matrix B:");
    scanmat(R2, C2, MAT2);

    int equal = 1;
    for (int i = 0; i < R1 && equal; i++) {
        for (int j = 0; j < C1; j++) {
            if (MAT1[i][j] != MAT2[i][j]) {
                equal = 0;
                break;
            }
        }
    }

    if (equal)
        printf("Matrices are equal!\n");
    else
        printf("Matrices are not equal!\n");

    return 0;
}
