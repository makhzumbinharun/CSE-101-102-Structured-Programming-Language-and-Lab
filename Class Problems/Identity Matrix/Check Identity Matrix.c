#include <stdio.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    if(R!=C){
    printf("Needs to be a Square Matrix! (R=C)");
    return 0;
    }
    
    int MAT[R][C];
    for(int i=0; i<R; i++) {
        for(int j=0; j<C; j++) {
            scanf("%d", &MAT[i][j]);
        }
    }
    int identity=1;
    for(int i=0; i<R; i++) {
        for(int j=0; j<C; j++) {
            if((i==j && MAT[i][j]!=1) || (i!=j && MAT[i][j]!=0)){
                identity=0;
                break;
            }
        }
        if(identity==0) break;
    }
    
    if (identity)
        printf("The matrix is an identity matrix.\n");
    else
        printf("The matrix is not an identity matrix.\n");


    return 0;
}
