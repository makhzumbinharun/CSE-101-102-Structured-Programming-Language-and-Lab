#include <stdio.h>

int main() {
	int R, C;
	scanf("%d %d", &R, &C);
	int MAT[R][C];
	for(int i=0; i<R; i++){
	    for(int j=0; j<C; j++){
	        scanf("%d", &MAT[i][j]);
	    }
	}
	for(int i=0; i<R; i++){
	    for(int j=0; j<C; j++){
	        printf("%d ", MAT[i][j]);
	    }
	    printf("\n");
	}
return 0;
}
