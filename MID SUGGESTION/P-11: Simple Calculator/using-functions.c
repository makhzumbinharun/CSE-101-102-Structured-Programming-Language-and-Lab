#include <stdio.h>

float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main() {
    float A, B, ANS = 0;
    char O;

    printf("Enter the First Number: ");
    scanf("%f", &A);
    printf("Enter the Second Number: ");
    scanf("%f", &B);
    printf("Select an operator (+, -, *, /): ");
    scanf(" %c", &O);

    switch(O) {
        case '+':
            ANS = add(A, B);
            break;
            
        case '-':
            ANS = subtract(A, B);
            break;
            
        case '*':
            ANS = multiply(A, B);
            break;
            
        case '/':
            if(B!= 0)
                ANS = divide(A, B);
            else {
                printf("Error: Can not be divided by zero!\n");
            }
            break;
            
        default:
            printf("Error: Invalid operator!\n");
    }

    printf("%.2f %c %.2f = %.2f\n", A, O, B, ANS);
    return 0;
}

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}
