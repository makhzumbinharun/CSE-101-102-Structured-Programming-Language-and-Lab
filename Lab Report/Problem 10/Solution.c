#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    int freq[256] = {0};

    printf("Enter any string (Max 100): ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            freq[str[i] + 32]++; // Convert uppercase to lowercase
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i]]++;
        }
    }

    printf("\nFrequency of all characters in the given string:\n");
    for (int i = 'a'; i <= 'z'; i++) {
        if (freq[i] > 0) {
            printf("'%c' = %d\n", i, freq[i]);
        }
    }

    return 0;
}
