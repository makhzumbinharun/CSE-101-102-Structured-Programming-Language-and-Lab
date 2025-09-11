#include <stdio.h>

int main() {
    char A;
    printf("Enter a Character: ");
    scanf(" %c", &A);
    
    if(A>=65 && A<=90)
        printf("%c is an uppercase.\n", A);
    else if(A>=97 && A<=122)
        printf("%c is an lowercase.\n", A);
    else
        printf("Error: Invalid!\n");

    return 0;
}
