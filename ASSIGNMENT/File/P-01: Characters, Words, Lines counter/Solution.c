#include <stdio.h>

int main() {
    FILE *fpt;
    fpt = fopen("file1.txt", "r");
    if (fpt == NULL) {
        printf("Error: File not found!\n");
        return 0;
    }

    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    while ((ch = fgetc(fpt)) != EOF) {
        characters++;

        if (ch == '\n')
            lines++;

        if (ch == ' ' || ch == '\t' || ch == '\n')
            inWord = 0;
        else if (inWord == 0) {
            inWord = 1;
            words++;
        }
    }

    fclose(fpt);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
