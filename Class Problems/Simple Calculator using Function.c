#include <stdio.h>

int addition(int x, int y){
    return x+y;
}

int subtraction(int x, int y){
    return x-y;
}

int multiplication(int x, int y){
    return x*y;
}

float division(int x, int y){
    return (float) x/y;
}

int modulus(int x, int y){
    return x%y;
}
int main() {
    int num1, num2;
    char operator;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Enter an operator [+,-,*,/,%] : ");
    scanf(" %c", &operator);
    
    switch(operator){
        
        case '+':
        printf("%d %c %d = %d\n", num1, operator, num2, addition(num1, num2));
        break;
        
        case '-':
        printf("%d %c %d = %d\n", num1, operator, num2, subtraction(num1, num2));
        break;
        
        case '*':
        printf("%d %c %d = %d\n", num1, operator, num2, multiplication(num1, num2));
        break;
        
        case '/':
            if(num2!=0){
                printf("%d %c %d = %.2f\n", num1, operator, num2, division(num1, num2));
        break;
        }
            else{
                printf("INVALID! \n The second number can't be zero.");
        }
        break;
        
        case '%':
            if(num2 != 0)
                printf("%d %c %d = %d\n", num1, operator, num2, modulus(num1, num2));
            else
                printf("INVALID! The second number can't be zero.\n");
            break;
        
        default:
        printf("Invalid operator!");
        break;
    }
    return 0;
}
