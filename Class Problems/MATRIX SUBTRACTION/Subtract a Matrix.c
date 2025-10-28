#include <stdio.h>

int main() {
	int R, C;
	scanf("%d %d", &R, &C);
	int MAT1[R][C], MAT2[R][C];
	int MAT[R][C];
	for(int i=0; i<R; i++){
	    for(int j=0; j<C; j++){
	        scanf("%d", &MAT1[i][j]);
	    }
	}
	
	for(int i=0; i<R; i++){
	    for(int j=0; j<C; j++){
	        scanf("%d", &MAT2[i][j]);
	    }
	}
	
	for(int i=0; i<R; i++){
	    for(int j=0; j<C; j++){
	        MAT[i][j]=MAT2[i][j]-MAT1[i][j];
	    }
	}
	
	
	for(int i=0; i<R; i++){
	    for(int j=0; j<C; j++){
	        printf("%4d", MAT[i][j]);
	    }
	    printf("\n");
	}
return 0;
}
