//Count frequency of a given character in a string.

#include <stdio.h>

int main() {
    char str[100], ch;
    int i, count = 0;

    printf("Enter a string: ");
    gets(str); // or use fgets(str, 100, stdin);

    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch)
            count++;
    }

    printf("%d\n", count);

    return 0;
}
