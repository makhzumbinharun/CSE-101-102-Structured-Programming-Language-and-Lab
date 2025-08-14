#include<stdio.h>

int main () {
    float C, F;
    printf("Enter the temperature in Centigrade: ")
    scanf("%f", &C);
    
    // C/5=F-32/9
    F=(C*9/5)+32;
    printf("The temperature in Farenhite is: %f");
    
    return 0;
}