#include <stdio.h>

int main() {
    int N, n, Remainder, Reverse=0;
    printf("Enter a Number: ");
    scanf("%d", &N);
    n=N;
    while(N!=0) {
        Remainder=N%10;
        Reverse=(Reverse*10)+Remainder;
        N/=10;
    }
  //  printf("%d ", Reverse);
    
    if(n==Reverse){
    printf("%d is a Palindrome", n);
    }
    else{
    printf("%d is not a Palindrome", n);
    }

    return 0;
}
