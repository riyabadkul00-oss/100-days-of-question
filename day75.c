//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char newText[200];

    // Ask for the filename
    printf("Enter the file name: ");
    scanf("%s", filename);

    // Open file in append mode
    file = fopen(filename, "a");

    // Check if file opened successfully
    if (file == NULL) {
        printf("Error: Could not open the file.\n");
        return 1;
    }

    // Clear input buffer before using fgets()
    getchar();

    // Get new line of text from the user
    printf("Enter text to append: ");
    fgets(newText, sizeof(newText), stdin);

    // Append the new text to the file
    fputs(newText, file);

    // Close the file
    fclose(file);

    printf("File updated successfully with appended text.\n");

    return 0;
}
