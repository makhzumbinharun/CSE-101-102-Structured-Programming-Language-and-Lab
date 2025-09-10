//10.Write a C program to print all Prime numbers between 1 to n.
#include <stdio.h>

int main() {
    int N, i, D;
    printf("Enter N: ");
    scanf("%d", &N);
    
    printf("Prime Numbers between 1 and %d: ", N);
    
    for (i=2; i<=N; i++) {
        int P=1;    
        for (D=2; D<=i/2; D++) {
            if (i%D==0) {
                P=0;
                break;
            }
        }
        if (P==1) {
            printf("%d ",i);
        }
    }
    return 0;
}
