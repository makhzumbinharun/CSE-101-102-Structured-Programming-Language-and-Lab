#include <stdio.h>

int main() {
    int start, end, sum = 0;
    printf("Enter two integers: ");
    scanf("%d %d", &start, &end);
    printf("Sum of numbers between %d and %d: ", start, end);
    for (int i = start; i <= end; i++) {
        sum += i;
        printf("%d", i);
        if (i != end) {
            printf(" + ");
        }
    }
    printf(" = %d\n", sum);

    return 0;
}
