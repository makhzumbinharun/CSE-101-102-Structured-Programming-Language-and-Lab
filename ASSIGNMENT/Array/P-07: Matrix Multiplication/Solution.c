#include <stdio.h>
void scanmat(int R, int C, int MAT[R][C]){
    for(int i=0; i<R; i++){
	    for(int j=0; j<C; j++){
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

    if(C1!=R2) {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }

    int MAT1[R1][C1], MAT2[R2][C2], MAT[R1][C2];
    
    scanmat(R1, C1, MAT1);
	scanmat(R2, C2, MAT2);
    

    for(int i=0; i<R1; i++) {
        for(int j=0; j<C2; j++) {
            MAT[i][j]=0;
            for(int k=0; k<C1; k++) {
                MAT[i][j]+=MAT1[i][k]*MAT2[k][j];
            }
        }
    }


    for(int i=0; i<R1; i++) {
        for (int j=0; j<C2; j++) {
            printf("%4d", MAT[i][j]);
        }
        printf("\n");
    }

    return 0;
}
