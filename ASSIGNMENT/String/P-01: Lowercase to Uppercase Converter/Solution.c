#include <stdio.h>
#include <string.h>

void mystrupper(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        }
    }
}

int main() {
    char str[101];

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    mystrupper(str);

    printf("%s\n", str);

    return 0;
}
