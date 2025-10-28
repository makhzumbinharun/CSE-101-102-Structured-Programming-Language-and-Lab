#include <stdio.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int MAT[R][C], TRANS[C][R];
    for(int i=0; i<R; i++) {
        for(int j=0; j<C; j++) {
            scanf("%d", &MAT[i][j]);
        }
    }
    
    for(int i=0; i<R; i++) {
        for(int j=0; j<C; j++) {
            TRANS[j][i]=MAT[i][j];
        }
    }

    for(int i=0; i<C; i++) {
        for (int j=0; j<R; j++) {
            printf("%4d", TRANS[i][j]);
        }
        printf("\n");
    }

    return 0;
}
