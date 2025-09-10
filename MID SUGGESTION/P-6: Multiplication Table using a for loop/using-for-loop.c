#include <stdio.h>

int main() {
    int N, i;
    printf("Enter N: ");
    scanf("%d", &N);
    
    printf("Multiplication Table of %d: \n");
    
    for(i=1; i<=10; i++){
        printf("%d * %d = %d\n", N, i, N*i);
    }
    return 0;
}
