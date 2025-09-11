//9. Write a C program to input a number from the user and check if the number is a palindrome or not using a loop.
#include <stdio.h>

int main() {
    int N, n, rem, rev=0;
    printf("Enter N: ");
    scanf("%d", &N);
    n=N;
    do{
        rem=N%10;
        rev=((rev*10)+rem);
        N/=10;
    }
    while(N>0); 
    printf("%d\n", rev);
    
    if(n==rev)
        printf("%d is a Palindrome.", n);
    else
        printf("%d is not a Palindrome.", n);

    return 0;
}
