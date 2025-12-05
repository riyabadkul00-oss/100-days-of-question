//Replace spaces with hyphens in a string.

#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    gets(str); // or use fgets(str, 100, stdin);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ')
            str[i] = '-';  // Replace space with hyphen
    }

    printf("Modified String: %s\n", str);

    return 0;
}
