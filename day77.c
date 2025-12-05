//Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fpIn, *fpOut;
    char ch;

    // Open input file in read mode
    fpIn = fopen("input.txt", "r");
    if (fpIn == NULL) {
        printf("Error: Cannot open input.txt\n");
        return 1;
    }

    // Open output file in write mode
    fpOut = fopen("output.txt", "w");
    if (fpOut == NULL) {
        printf("Error: Cannot open output.txt\n");
        fclose(fpIn);
        return 1;
    }

    // Read characters one by one and convert
    while ((ch = fgetc(fpIn)) != EOF) {
        if (islower(ch)) {
            ch = toupper(ch);
        }
        fputc(ch, fpOut);
    }

    printf("Conversion Successful! Check output.txt\n");

    fclose(fpIn);
    fclose(fpOut);

    return 0;
}
