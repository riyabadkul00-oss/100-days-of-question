//Print the initials of a name.

#include <stdio.h>

int main() {
    char name[100];
    int i;

    printf("Enter a name: ");
    gets(name); // or use fgets(name, 100, stdin);

    // Print the first initial
    if (name[0] != ' ')
        printf("%c.", name[0]);

    // Loop through the rest of the string
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0') {
            printf("%c.", name[i + 1]);  // Print initial after each space
        }
    }

    printf("\n");
    return 0;
}
