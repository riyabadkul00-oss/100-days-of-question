//Write a program to take a string input. Change it to sentence case.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];

    // Read input line
    if (!fgets(str, sizeof(str), stdin)) return 0;

    // Remove trailing newline
    str[strcspn(str, "\n")] = '\0';

    // Extract string if input like: str = "something"
    char *start = strchr(str, '"');
    char *end = strrchr(str, '"');
    char sentence[1000];

    if (start && end && end > start) {
        size_t len = end - start - 1;
        strncpy(sentence, start + 1, len);
        sentence[len] = '\0';
    } else {
        // if no quotes, try after '=' or full input
        char *eq = strchr(str, '=');
        if (eq) {
            strcpy(sentence, eq + 1);
        } else {
            strcpy(sentence, str);
        }

        // trim spaces
        char *s = sentence;
        while (*s && isspace((unsigned char)*s)) s++;
        memmove(sentence, s, strlen(s) + 1);
    }

    // Convert to sentence case
    int newWord = 1;
    for (int i = 0; sentence[i] != '\0'; i++) {
        if (isalpha((unsigned char)sentence[i])) {
            if (newWord) {
                sentence[i] = toupper(sentence[i]);
                newWord = 0;
            } else {
                sentence[i] = tolower(sentence[i]);
            }
        } else if (isspace((unsigned char)sentence[i])) {
            newWord = 1;
        }
    }

    printf("%s\n", sentence);
    return 0;
}
