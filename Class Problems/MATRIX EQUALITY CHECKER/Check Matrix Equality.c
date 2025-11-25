#include <stdio.h>

int main() {
    int R1, C1, R2, C2;
    scanf("%d %d", &R1, &C1);
    scanf("%d %d", &R2, &C2);

    if(C1!=R2) {
        printf("Matrices cannot be compared for equality (different dimensions)\n");
        return 0;
    }

    int MAT1[R1][C1], MAT2[R2][C2];
    for(int i=0; i<R1; i++) {
        for(int j=0; j<C1; j++) {
            scanf("%d", &MAT1[i][j]);
        }
    }
    for(int i=0; i<R2; i++) {
        for(int j=0; j<C2; j++) {
            scanf("%d", &MAT2[i][j]);
        }
    }

     int equal=1;
    for(int i=0; i<R1; i++) {
        for(int j=0; j<C1; j++) {
            if(MAT1[i][j]!=MAT2[i][j]) {
                equal=0;
                break;
            }
        }
        if(equal==0) break;
    }

    if(equal)
        printf("Matrices are equal!\n");
    else
        printf("Matrices are not equal!\n");

    return 0;
}
