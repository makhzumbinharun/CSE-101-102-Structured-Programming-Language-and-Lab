#include <stdio.h>

int main() {
    int N, Remainder, Reverse=0;
    printf("Enter a Number:");
    scanf("%d", &N);

    while(N!=0) {
        Remainder=N%10;
        Reverse=(Reverse*10)+Remainder;
        N/=10;
    }
    printf("%d ", Reverse);

    return 0;
}
