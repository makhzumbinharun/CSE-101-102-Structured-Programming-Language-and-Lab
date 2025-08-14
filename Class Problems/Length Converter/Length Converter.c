#include<stdio.h>

int main () {
    double C, M ,K;
    
    printf("Enter the length in Centimeters: ");
    scanf("%lf", &C);
    printf("Length in Meters: %.2lf\n", C/100);
    printf("Length in Kilometers: %.2lf", C/100000);
    
    return 0;
}
