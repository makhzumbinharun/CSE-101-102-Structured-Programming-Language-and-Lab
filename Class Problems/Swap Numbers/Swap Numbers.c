#include <stdio.h>

int main() {
    int A, B, temp;
    printf("Enter the value of A and B: ");
    scanf("%d %d",&A, &B);
    temp=A;
    A=B;
    B=temp;
    printf("A=%d B=%d", A,B);
    return 0;
}
