#include <stdio.h>

int main() {
    int N, i;
    long long FACT = 1;
    printf("Enter N: ");
    scanf("%d", &N);

    for (i=1; i<=N; i++) {
        FACT*=i;
    }
    printf("Factorial of %d is: %lld\n", N, FACT);

    return 0;
}
