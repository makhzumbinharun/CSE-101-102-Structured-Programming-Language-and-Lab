#include <stdio.h>
#include <math.h>

int main() {
    int B, P;
    long long POWER=1;
    
    printf("Enter the Base: ");
    scanf("%d", &B);
    printf("Enter the Power: ");
    scanf("%d", &P);
    
    POWER= pow(B, P);
    
    printf("The power is: %lld\n", POWER);

    return 0;
}
