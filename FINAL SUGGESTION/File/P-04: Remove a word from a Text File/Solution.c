#include <stdio.h>
#include <string.h>

int main() {
    FILE *fptr, *temp;
    char filename[100], word[50], buffer[1000];

    printf("Enter file name: ");
    scanf("%s", filename);

    printf("Enter word to remove: ");
    scanf("%s", word);

    fptr = fopen(filename, "r");
    if (fptr == NULL) {
        printf("Error: Cannot open file.\n");
        return 1;
    }

    temp = fopen("temp.txt", "w");
    if (temp == NULL) {
        printf("Error: Cannot create temporary file.\n");
        fclose(fptr);
        return 1;
    }

    while (fscanf(fptr, "%s", buffer) != EOF) {
        if (strcmp(buffer, word) != 0) {
            fprintf(temp, "%s ", buffer);
        }
    }

    fclose(fptr);
    fclose(temp);

    remove(filename);
    rename("temp.txt", filename);

    printf("Word removed successfully.\n");

    return 0;
}
