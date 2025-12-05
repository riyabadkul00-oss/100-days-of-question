//Check if two strings are anagrams of each other.

#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int freq[26] = {0};  // For 'a' to 'z'
    int i, flag = 0;

    printf("Enter first string: ");
    gets(str1); // or use fgets(str1, 100, stdin);

    printf("Enter second string: ");
    gets(str2); // or use fgets(str2, 100, stdin);

    // Count frequency of each character in str1
    for(i = 0; str1[i] != '\0'; i++) {
        if(str1[i] >= 'a' && str1[i] <= 'z')
            freq[str1[i] - 'a']++;
        else if(str1[i] >= 'A' && str1[i] <= 'Z')
            freq[str1[i] - 'A']++;
    }

    // Decrease frequency for each character in str2
    for(i = 0; str2[i] != '\0'; i++) {
        if(str2[i] >= 'a' && str2[i] <= 'z')
            freq[str2[i] - 'a']--;
        else if(str2[i] >= 'A' && str2[i] <= 'Z')
            freq[str2[i] - 'A']--;
    }

    // Check if all frequencies are zero
    for(i = 0; i < 26; i++) {
        if(freq[i] != 0) {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("Anagrams\n");
    else
        printf("Not anagrams\n");

    return 0;
}
