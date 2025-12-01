#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int word = 0;
    int nword = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            nword = 0;
        }
        else if (nword == 0){
            nword = 1;
            word++;
        }
    }

    printf("Number of words = %d\n", word);
    return 0;
}
