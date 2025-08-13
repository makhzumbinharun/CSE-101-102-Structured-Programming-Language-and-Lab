#include<stdio.h>

int main() {

    int N;
    printf("Enter a Number:");
    scanf("%d", &N);
    if (N%2==0){
        printf("%d is an Even Number.", N);
    }
    else{
        printf("%d is an Odd Number.", N);
    }

    return 0;
}
