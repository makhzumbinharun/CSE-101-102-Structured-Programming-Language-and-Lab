#include<stdio.h>

int main () {
    float C,M,K;
    
    printf("Enter the length in Centimeters: ");
    scanf("%f", &C);
    printf("Length in Meters: %f", C*100);
    printf("Length in Kilometers: %f", C*10000);
    
    return 0;
}