#include <stdio.h>

int main() {
    int N, n, rem, rev=0;
    printf("Enter N: ");
    scanf("%d", &N);
    n=N;
    for(;N>0;) {
        rem=N%10;
        rev=((rev*10)+rem);
        N/=10;
    }
    printf("%d\n", rev);
    
    if(n==rev)
        printf("%d is a Palindrome.", n);
    else
        printf("%d is not a Palindrome.", n);

    return 0;
}
