#include <stdio.h>

int main() {
    int A, B, C;
    
    printf("Enter the first Number: ");
    scanf("%d", &A);
    printf("Enter the second Number: ");
    scanf("%d", &B);
    printf("Enter the third Number: ");
    scanf("%d", &C);
    
    if(A>B && A>C)
        printf("%d is the Maximum Number.\n", A);
    else if(B>A && B>C)
        printf("%d is the Maximum Number.\n", A);
    else
        printf("%d is the Maximum Number.\n", C);

    return 0;
}
