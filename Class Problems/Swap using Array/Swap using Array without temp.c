#include <stdio.h>

int main() {
    int arr[2];

    printf("Enter first number: ");
    scanf("%d", &arr[0]);

    printf("Enter second number: ");
    scanf("%d", &arr[1]);

    printf("\nBefore swapping:\n");
    printf("a = %d, b = %d\n", arr[0], arr[1]);

    arr[0] = arr[0] + arr[1];
    arr[1] = arr[0] - arr[1];
    arr[0] = arr[0] - arr[1];

    printf("\nAfter swapping:\n");
    printf("a = %d, b = %d\n", arr[0], arr[1]);

    return 0;
}
