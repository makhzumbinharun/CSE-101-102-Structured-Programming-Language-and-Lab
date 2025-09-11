#include <stdio.h>
int main() {
    int i, B, P, POWER=1;
    
    printf("Enter the Base: ");
    scanf("%d", &B);
    printf("Enter the Power: ");
    scanf("%d", &P);
    
    for(i=1; i<=P; i++){
        POWER*=B;
    }
    
    printf("%d^%d = %d",B, P, POWER);
    
    
    return 0;
}
