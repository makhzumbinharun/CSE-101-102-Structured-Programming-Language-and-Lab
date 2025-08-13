#include <stdio.h>
#include <math.h>

int main() {
    double X, Y;
    char operator;

    // Get inputs from user
    printf("Enter the first number: ");
    scanf("%lf", &X);

    printf("Enter the second number: ");
    scanf("%lf", &Y);

    printf("Enter an operator (+, -, *, /, %): ");
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
            printf("Result: %.2lf + %.2lf = %.2lf\n", X, Y, X + Y);
            break;

        case '-':
            printf("Result: %.2lf - %.2lf = %.2lf\n", X, Y, X - Y);
            break;

        case '*':
            printf("Result: %.2lf * %.2lf = %.2lf\n", X, Y, X * Y);
            break;

        case '/':
            if (Y == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                printf("Result: %.2lf / %.2lf = %.2lf\n", X, Y, X / Y);
            }
            break;
        
        case '%':
            printf("Result: %.0lf %% %.0lf = %.0lf\n", X, Y, (int)X % (int)Y);
            break;
            /* 
            case '%':
            printf("Result: %.0lf %% %.0lf = %.0lf\n", X, Y, fmod(X,Y));
            break;
            */
        default:
            printf("Invalid operator!\n");
            break;
    }

    return 0;
}



