//Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int len, i, lastSpaceIndex = -1;

    printf("Enter a full name: ");
    gets(name); // or use fgets(name, 100, stdin);

    len = strlen(name);

    // Find the position of the last space (before surname)
    for (i = len - 1; i >= 0; i--) {
        if (name[i] == ' ') {
            lastSpaceIndex = i;
            break;
        }
    }

    // Print initials for all names before the surname
    if (name[0] != ' ')
        printf("%c.", name[0]);

    for (i = 0; i < lastSpaceIndex; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ')
            printf("%c.", name[i + 1]);
    }

    // Print surname in full
    if (lastSpaceIndex != -1)
        printf(" %s\n", &name[lastSpaceIndex + 1]);
    else
        printf("\n"); // In case only one word was entered

    return 0;
}
