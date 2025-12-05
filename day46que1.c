//Remove all vowels from a string.

#include <stdio.h>

int main() {
    char str[100], result[100];
    int i, j = 0;

    printf("Enter a string: ");
    gets(str); // or use fgets(str, 100, stdin);

    for(i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        // Check if not a vowel
        if(!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
             ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) {
            result[j++] = ch;
        }
    }

    result[j] = '\0'; // Null terminate the new string

    printf("String without vowels: %s\n", result);

    return 0;
}
