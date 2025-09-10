#include <stdio.h>

int main() {
    int n, N, rem, SUM = 0;
    printf("Enter N: ");
    scanf("%d", &N);
    n = N;

    for (; N > 0; ) {
        rem = N % 10;
        SUM += rem;
        N /= 10;
    }

    printf("Summation of the digits of %d is: %d\n", n, SUM);

    return 0;
}
