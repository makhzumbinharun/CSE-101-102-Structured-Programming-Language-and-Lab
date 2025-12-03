#include <stdio.h>

int main() {
    FILE *fpt;
    char filename[100];
    char content[500];

    printf("Enter file name: ");
    scanf("%s", filename);

    fpt = fopen(filename, "a");
    if (fpt == NULL) { 
        printf("Error: Cannot open file.\n");
        return 1;
    }

    printf("Enter text to append: ");
    getchar(); 
    fgets(content, sizeof(content), stdin);

    fputs(content, fpt);

    fclose(fpt);

    printf("Content appended successfully.\n");

    return 0;
}
