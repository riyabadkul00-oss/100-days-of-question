//Check if a string is a palindrome.

#include <stdio.h>

int main() {
    char str[100];
    int i, len = 0, flag = 0;

    printf("Enter a string: ");
    gets(str); // or use fgets(str, 100, stdin);

    // Find length of string
    for(i = 0; str[i] != '\0'; i++) {
        len++;
    }

    // Check palindrome
    for(i = 0; i < len / 2; i++) {
        if(str[i] != str[len - i - 1]) {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}
