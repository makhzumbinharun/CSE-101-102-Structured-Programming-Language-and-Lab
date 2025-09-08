#include <stdio.h>

int main() {
    int N, i, SUM=0;
    printf("Enter N: ");
    scanf("%d", &N);
    for(i=1; i<=N; i++){
        if(i%2==0 && i%5==0)
            SUM+=i;
    }
    printf("Summation of Natural Numbers from 1 to N: %d", SUM);
    
    return 0;
}
