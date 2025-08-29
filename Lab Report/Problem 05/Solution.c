#include <stdio.h>

int main() {
    int n, i = 1, SUM = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    do {
        if (i % 2 != 0) {
            SUM += i;
        }
        i++;
    } while (i <= n);

    printf("The SUM is: %d", SUM);
    return 0;
}
