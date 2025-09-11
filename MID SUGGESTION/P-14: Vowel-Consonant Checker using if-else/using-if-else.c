#include <stdio.h>

int main() {
    char A;
    
    printf("Enter an Alphabet: ");
    scanf(" %c", &A);

    if ((A>='A' && A<='Z') || (A>='a' && A<='z')) {
        if (A=='A' || A=='E' || A=='I' || A=='O' || A=='U' ||
            A=='a' || A=='e' || A=='i' || A=='o' || A=='u') {
            printf("%c is a vowel.\n", A);
        }
        else {
            printf("%c is a consonant.\n", A);
        }
    }
    else {
        printf("Error: Invalid input! Not an alphabet.\n");
    }

    return 0;
}
