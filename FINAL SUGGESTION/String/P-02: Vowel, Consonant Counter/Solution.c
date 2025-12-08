#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    int vowel = 0, consonant = 0;

    printf("Enter a string (max 100 characters): ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);
    for(int i = 0; i < len; i++) {

        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
               str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U') {
                vowel++;
            }
            else {
                consonant++;
            }
        }
    }

    printf("%s\n", str);
    printf("Vowels: %d\nConsonants: %d\n", vowel, consonant);

    return 0;
}
