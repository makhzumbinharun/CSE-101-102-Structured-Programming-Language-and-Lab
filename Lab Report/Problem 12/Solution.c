#include <stdio.h>

int main() {
    int R, C;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &R, &C);

    int A[R][C], B[R][C];
    int i, j, flag = 1;

    // Input matrix 1
    printf("Input elements of matrix1:\n");
    for(i = 0; i < R; i++) {
        for(j = 0; j < C; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input matrix 2
    printf("Input elements of matrix2:\n");
    for(i = 0; i < R; i++) {
        for(j = 0; j < C; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Compare matrices
    for(i = 0; i < R; i++) {
        for(j = 0; j < C; j++) {
            if(A[i][j] != B[i][j]) {
                flag = 0;
                break;
            }
        }
        if(flag == 0) break;
    }

    if(flag == 1)
        printf("Both matrices are equal\n");
    else
        printf("Matrices are not equal\n");

    return 0;
}
