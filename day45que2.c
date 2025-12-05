//Toggle case of each character in a string.

#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    gets(str); // or use fgets(str, 100, stdin);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;  // Convert lowercase to uppercase
        else if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;  // Convert uppercase to lowercase
    }

    printf("Toggled String: %s\n", str);

    return 0;
}
