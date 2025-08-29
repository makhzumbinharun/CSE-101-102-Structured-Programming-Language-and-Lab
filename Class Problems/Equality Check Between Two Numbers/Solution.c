#include <stdio.h>

int main() {
    int N1, N2;
    printf("Enter first integer: ");
    scanf("%d", &N1);
    printf("Enter second integer: ");
    scanf("%d", &N2);
    if (N1 == N2) {
        printf("%d and %d are equal.\n", N1, N2);
    } else {
        printf("%d and %d are not equal.\n", N1, N2);
    }

    return 0;
}
