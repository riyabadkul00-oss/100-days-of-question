//Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[1000], t[1000];

    // Input the strings
    if (!fgets(s, sizeof(s), stdin)) return 0;
    if (!fgets(t, sizeof(t), stdin)) return 0;

    // Remove newline characters if present
    s[strcspn(s, "\n")] = '\0';
    t[strcspn(t, "\n")] = '\0';

    // Extract actual strings if input like: s = "anagram", t = "nagaram"
    char *firstQuote, *lastQuote;
    char s_clean[1000] = "", t_clean[1000] = "";

    firstQuote = strchr(s, '"');
    if (firstQuote) {
        lastQuote = strrchr(firstQuote + 1, '"');
        if (lastQuote) {
            strncpy(s_clean, firstQuote + 1, lastQuote - firstQuote - 1);
            s_clean[lastQuote - firstQuote - 1] = '\0';
        }
    } else {
        strcpy(s_clean, s);
    }

    firstQuote = strchr(t, '"');
    if (firstQuote) {
        lastQuote = strrchr(firstQuote + 1, '"');
        if (lastQuote) {
            strncpy(t_clean, firstQuote + 1, lastQuote - firstQuote - 1);
            t_clean[lastQuote - firstQuote - 1] = '\0';
        }
    } else {
        strcpy(t_clean, t);
    }

    // If format like s = something, remove 's =' or 't ='
    if (strncmp(s_clean, "s =", 3) == 0) memmove(s_clean, s_clean + 3, strlen(s_clean) - 2);
    if (strncmp(t_clean, "t =", 3) == 0) memmove(t_clean, t_clean + 3, strlen(t_clean) - 2);

    // Trim leading/trailing spaces
    char *start = s_clean;
    while (isspace((unsigned char)*start)) start++;
    memmove(s_clean, start, strlen(start) + 1);
    start = t_clean;
    while (isspace((unsigned char)*start)) start++;
    memmove(t_clean, start, strlen(start) + 1);

    // Compare character frequencies
    int count[26] = {0};
    for (int i = 0; s_clean[i]; i++)
        count[s_clean[i] - 'a']++;

    for (int i = 0; t_clean[i]; i++)
        count[t_clean[i] - 'a']--;

    int isAnagram = 1;
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram)
        printf("Anagram\n");
    else
        printf("Not Anagram\n");

    return 0;
}
