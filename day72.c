//Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.

#include <stdio.h>

int main() {
    FILE *file;
    char line[100];  // Buffer to store each line

    // Open the existing file in read mode
    file = fopen("info.txt", "r");

    // Check if file opened successfully
    if (file == NULL) {
        printf("Error: Could not open the file.\n");
        return 1;
    }

    printf("File contents:\n");

    // Read each line until EOF using fgets()
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);  // Print the line
    }

    // Close the file
    fclose(file);

    return 0;
}
