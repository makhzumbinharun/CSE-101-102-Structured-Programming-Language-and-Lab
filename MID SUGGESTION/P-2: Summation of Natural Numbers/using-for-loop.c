#include <stdio.h>

int main() {
    int N, i, SUM=0;
    printf("Enter N: ");
    scanf("%d", &N);
    for(i=1; i<=N; i++){
        SUM+=i;
    }
    printf("Summation of all Natural Numbers from 1 to N: %d", SUM);
    
    return 0;
}
