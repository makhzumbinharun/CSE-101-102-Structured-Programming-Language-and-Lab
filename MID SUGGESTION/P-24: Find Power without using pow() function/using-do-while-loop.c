#include <stdio.h>
int main() {
    int i=1, B, P, POWER=1;
    
    printf("Enter the Base: ");
    scanf("%d", &B);
    printf("Enter the Power: ");
    scanf("%d", &P);
    
    do{
        POWER*=B;
        i++;
    }
    while(i<=P);
    printf("%d^%d = %d",B, P, POWER);
    
    
    return 0;
}
