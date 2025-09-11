#include <stdio.h>
int main() {
    float X, Y;
    float add, subtract, multiply, divide;
    int mod;
    
    printf("Enter the first Number: ");
    scanf("%f", &X);
    printf("Enter the second Number: ");
    scanf("%f", &Y);
    
    add=X+Y;
    subtract=X-Y;
    multiply=X*Y;
    
    printf("%.2f + %.2f = %.2f\n",X, Y, add);
    printf("%.2f - %.2f = %.2f\n",X, Y, subtract);
    printf("%.2f * %.2f = %.2f\n",X, Y, multiply);
    
    
    if(Y==0)
        printf("%.2f / %.2f = UNDEFINED!\n", X, Y);
    else{
        divide=X/Y;
        printf("%.2f / %.2f = %.2f\n",X, Y, divide);
    }
    if(Y==0)
        printf("%.2f %% %.2f = UNDEFINED!\n", X, Y);
    else{
        mod=(int)X%(int)Y;
        printf("%.2f %% %.2f = %d\n",X, Y, mod);
    }
      
    return 0;
}
