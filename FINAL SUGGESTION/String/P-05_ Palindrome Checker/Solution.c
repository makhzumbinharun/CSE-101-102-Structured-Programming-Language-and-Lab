#include <stdio.h>
#include <string.h>

int cpal(char str[], int len) {
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char str[1000];

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);

    if (cpal(str, len)) {
        printf("\"%s\" is a Palindrome.\n", str);
    } else {
        printf("\"%s\" is not a Palindrome.\n", str);
    }

    return 0;
}
