#include <stdio.h>

int main() {
	int R, C;
	scanf("%d %d", &R, &C);
	int MAT[R][C], MAT2[R][C];
	int Matrix[R][C];
	for(int i=0; i<R; i++){
	    for(int j=0; j<C; j++){
	        scanf("%d", &MAT[i][j]);
	    }
	}
	for(int i=0; i<R; i++){
	    for(int j=0; j<C; j++){
	        printf("%d ", MAT[i][j]);
	        if(i<j){
	        printf("\n");
	            
	        }
	    }
	}
return 0;
}

/*

// Program to add two matrix.
    // Input first matrix
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &MAT[i][j]);
        }
    }

    // Input second matrix
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &MAT2[i][j]);
        }
    }

    // Add matrices
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            Matrix[i][j] = MAT[i][j] + MAT2[i][j];
        }
    }

    // Print result
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            printf("%d ", Matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

*/
