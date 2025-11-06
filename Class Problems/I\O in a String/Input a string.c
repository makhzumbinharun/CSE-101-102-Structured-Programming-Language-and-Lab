/* 1. Using scanf() for single-word input:
The scanf() function with the %s format specifier is suitable for reading a single word (a sequence of characters without spaces).*/

#include <stdio.h>

int main() {
    char name[20]; // Declare a character array to store the name
    scanf("%s", name); // Read a single word into 'name'
    printf("Hello, %s!\n", name);
    return 0;
}
/*Note: scanf("%s", name) does not require the & operator because name (being an array name) already represents the address of the first element.
Limitations: scanf("%s", ...) stops reading at the first whitespace character (space, tab, or newline). Therefore, it cannot read strings containing spaces.*/
/* 2. Using fgets() for input with spaces:
The fgets() function is preferred for reading entire lines, including spaces.*/
#include <stdio.h>

int main() {
    char fullName[50]; // Declare a character array for the full name
    // Read up to 49 characters (sizeof(fullName) - 1 for null terminator)
    // from standard input (stdin) into fullName
    fgets(fullName, sizeof(fullName), stdin); 
    printf("Welcome, %s", fullName); // Print the full name
    return 0;
}
/*
Explanation of fgets() arguments:
fullName: The character array where the input string will be stored.
sizeof(fullName): The maximum number of characters to read, including the null terminator. fgets() will read at most n-1 characters if n is the size, ensuring space for \0.
stdin: The input stream to read from (standard input in this case). 
Note: fgets() includes the newline character (\n) if the user presses Enter before the buffer is full. You might need to remove it if it's not desired (e.g., using strcspn from <string.h>).
*/
/* 3. Using scanf() with a Scanset for input with spaces (until newline):
You can use a scanset with scanf() to read characters until a specific character, like a newline.
*/
#include <stdio.h>

int main() {
    char sentence[100];
    printf("Enter a sentence: ");
    // Read all characters until a newline is encountered
    scanf("%[^\n]s", sentence); 
    printf("You entered: %s\n", sentence);
    return 0;
}
/*Note: After using scanf("%[^\n]s", ...) to read a line, the newline character (\n) remains in the input buffer. If you need to perform subsequent input operations, you might need to consume this leftover newline character (e.g., using getchar() or scanf("%c", &dummy_char)).*/
