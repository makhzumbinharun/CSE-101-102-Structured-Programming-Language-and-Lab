#include <stdio.h>

int main() {
    int A, B, ANS=0;
    char O;
    printf("Enter the First Number: ");
    scanf("%d", &A);
    printf("Enter the Second Number: ");
    scanf("%d", &B);
    
    printf("Select an operator:\n 1. + \n 2. - \n 3. * \n 4. / \n");
    scanf(" %c", &O);
    
    switch(O){
        case '+':
            ANS=A+B;
        break;
        
        case '-':
            ANS=A-B;
        break;
        
        case '*':
            ANS=A*B;
        break;
        
        case '/':
            if(B!= 0)
                ANS = A / B;
            else {
                printf("Error: Can not be divided by zero!\n");
            }
            break;
            
        default:
            printf("Error: Invalid operator!\n");
    }
    
    printf("%d %c %d = %d", A, O, B, ANS);
    
    return 0;
}
