#include <stdio.h>
int main() {
    int i=1, B, P, POWER=1;
    
    printf("Enter the Base: ");
    scanf("%d", &B);
    printf("Enter the Power: ");
    scanf("%d", &P);
    
    while(i<=P){
        POWER*=B;
        i++;
    }
    
    printf("%d^%d = %d",B, P, POWER);
    
    return 0;
}
