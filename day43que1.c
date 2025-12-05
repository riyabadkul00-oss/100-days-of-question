//Reverse a string.

#include <stdio.h>

int main() {
    char str[100], rev[100];
    int i, len = 0, j = 0;

    printf("Enter a string: ");
    gets(str); // or use fgets(str, 100, stdin);

    // Find length of string
    for(i = 0; str[i] != '\0'; i++) {
        len++;
    }

    // Reverse the string
    for(i = len - 1; i >= 0; i--) {
        rev[j++] = str[i];
    }
    rev[j] = '\0'; // Null-terminate the reversed string

    printf("Reversed String: %s\n", rev);

    return 0;
}
