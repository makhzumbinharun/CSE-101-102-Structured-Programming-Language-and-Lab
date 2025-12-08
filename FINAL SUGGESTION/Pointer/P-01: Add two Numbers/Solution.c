#include <stdio.h>

int main() {
    int num1, num2;
    int *ptr1 = &num1;
    int *ptr2 = &num2;

    printf("Enter two integers: ");
    scanf("%d %d", ptr1, ptr2);

    printf("Summation of %d and %d using pointers: %d\n", *ptr1, *ptr2, (*ptr1 + *ptr2));

    return 0;
}
