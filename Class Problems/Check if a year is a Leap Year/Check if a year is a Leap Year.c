#include<stdio.h>

int main() {

    int Year;
    printf("Enter a year:");
    scanf("%d", &Year);
    if (Year%400==0 || (Year%4==0 && Year%100!=0)){
        printf("%d is a Leap Year.", Year);
    }
    else{
        printf("%d is not a Leap Year.", Year);
    }

    return 0;
}
