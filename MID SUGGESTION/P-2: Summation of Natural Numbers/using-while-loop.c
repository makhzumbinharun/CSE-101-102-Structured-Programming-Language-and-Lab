#include <stdio.h>

int main() {
    int N, i=1, SUM=0;
    printf("Enter N: ");
    scanf("%d", &N);
    while(i<=N){
        SUM+=i;
        i++;
    }
    printf("Sumation of all Natural Numbers from 1 to N: %d", SUM);
    
    return 0;
}
