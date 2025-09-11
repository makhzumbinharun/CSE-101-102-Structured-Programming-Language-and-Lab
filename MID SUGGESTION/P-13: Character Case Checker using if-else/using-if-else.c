#include <stdio.h>

int main() {
    char C;
    printf("Enter a Character: ");
    scanf(" %c", &C);
    
    if(C>=65 && C<=90)
        printf("%c is an uppercase.\n", C);
    else if(C>=97 && C<=122)
        printf("%c is an lowercase.\n", C);
    else
        printf("Error: Invalid!\n");

    return 0;
}
