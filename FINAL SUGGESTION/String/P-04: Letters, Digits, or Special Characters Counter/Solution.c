#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    int alphabets = 0, digits = 0, special = 0;

    printf("Enter a string (max 100 characters): ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for(int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            alphabets++;
        }
        else if(ch >= '0' && ch <= '9') {
            digits++;
        } 
        else {
            special++;
        }
    }

    printf("Total Alphabets: %d\n", alphabets);
    printf("Total Digits: %d\n", digits);
    printf("Total Special Characters: %d\n", special);

    return 0;
}
