#include <stdio.h>

int main() {
    int N;
    
    printf("Enter a Number: ");
    scanf("%d", &N);
    
    if(N%2==0)
        printf("%d is a Even Number.\n", N);
    else
        printf("%d is an Odd Number.\n", N);

    return 0;
}
