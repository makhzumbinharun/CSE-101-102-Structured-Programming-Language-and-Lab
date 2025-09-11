#include <stdio.h>

int main() {
    int N;
    
    printf("Enter a Number: ");
    scanf("%d", &N);
    
    if(N%5==0 && N%11==0)
        printf("%d is divisible by 5 and 11.\n", N);
    else
        printf("%d is not divisible.\n", N);

    return 0;
}
