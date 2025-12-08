#include <stdio.h>
void scanmat(int R, int C, int MAT[R][C]){
    for(int i=0; i<R; i++){
	    for(int j=0; j<C; j++){
	        scanf("%d", &MAT[i][j]);
	    }
	}
}


int main() {

    int R, C;
    printf("Enter rows and columns for Matrix: ");
    scanf("%d %d", &R, &C);

    int MAT[R][C];
    scanmat(R, C, MAT);
    printf("Enter Multiplier: ");
    int M;
    scanf("%d", &M);

    for(int i=0; i<R; i++) {
        for(int j=0; j<C; j++) {
                MAT[i][j]*=M;
            }
        }

    printf("Matrix after Scalar Multiplication:\n");
    for(int i=0; i<R; i++) {
        for (int j=0; j<C; j++) {
            printf("%4d", MAT[i][j]);
        }
        printf("\n");
    }

    return 0;
}
