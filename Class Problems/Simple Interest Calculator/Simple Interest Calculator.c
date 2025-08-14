#include<stdio.h>

int main() {
    float P, R, T, S;
    printf("Enter the value of Principal: ");
    scanf("%f",&P);
    printf("Enter the value of Rate: ");
    scanf("%f",&R);
    printf("Enter the value of Time: ");
    scanf("%f",&T);
    //S=(P*R*T)/100;
    printf("Your Simple Interest is: %f",S=(P*(R/100)*T)/100);
    
    return 0;
}