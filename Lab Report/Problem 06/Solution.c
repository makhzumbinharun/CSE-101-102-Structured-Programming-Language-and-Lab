#include<stdio.h>

int main() {
    int N, FACTORIAL = 1;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        FACTORIAL *= i;
    }

    printf("Factorial of %d is: %d", N, FACTORIAL);

    return 0;
}
