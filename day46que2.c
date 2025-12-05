//Find the first repeating lowercase alphabet in a string.

#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};  // For 'a' to 'z'
    int i;
    char firstRepeating = '\0';

    printf("Enter a string: ");
    gets(str); // or use fgets(str, 100, stdin);

    for(i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if(ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;  // Increment frequency count
            if(freq[ch - 'a'] == 2) {  // Found repeating
                firstRepeating = ch;
                break;
            }
        }
    }

    if(firstRepeating != '\0')
        printf("%c\n", firstRepeating);
    else
        printf("No repeating character\n");

    return 0;
}
