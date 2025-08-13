#include <stdio.h>

int main() {
    int A, B;
    printf("Enter the value of A: ");
    scanf("%d",&A);
    printf("Enter the value of B: ");
    scanf("%d",&B);
    A=A-B;
    B=B+A;
    A=B-A;
    printf("A=%d",A);
    printf("B=%d",B);
    return 0;
}
