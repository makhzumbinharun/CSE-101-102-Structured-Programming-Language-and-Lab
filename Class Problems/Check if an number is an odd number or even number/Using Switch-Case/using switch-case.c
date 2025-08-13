#include <stdio.h>

int main() {
    int N;

    printf("Enter the Number: ");
    scanf("%d", &N);

    switch (N%2==0) {
        case 1:
            printf("Even");
            break;

        case 0:
            printf("Odd");
            break;

            default:
            printf("Neither Even nor Odd!");
            break;
    }

    return 0;
}
