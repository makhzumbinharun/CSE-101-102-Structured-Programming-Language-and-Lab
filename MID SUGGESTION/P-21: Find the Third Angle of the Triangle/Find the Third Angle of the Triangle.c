#include <stdio.h>

int main() {
    int A, B, C;
    
    printf("Enter the First Angle: ");
    scanf("%d", &A);
    printf("Enter the Second Angle: ");
    scanf("%d", &B);
    
    if(A+B>=180)
        printf("Invalid angles! Sum must be less than 180.\n");
    else{
        C=180-(A+B);
        printf("The Third Angle is: %d\n", C);
    }
    
    return 0;
}
