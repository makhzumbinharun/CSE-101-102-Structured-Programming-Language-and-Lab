#include <stdio.h>

int main() {
    int N, i=1;
    printf("Enter a number: ");
    scanf("%d", &N);
    printf("Multiplication table of %d:\n", N);
    do {
        printf("%d * %d = %d\n", N, i, N * i);
        i++;
    }
    while(i <= 10);

    return 0;
}
