//Print all sub-strings of a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, k, len;

    printf("Enter a string: ");
    gets(str); // or use fgets(str, 100, stdin);

    len = strlen(str);

    // Print all substrings
    for(i = 0; i < len; i++) {
        for(j = i; j < len; j++) {
            for(k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            if(!(i == len - 1 && j == len - 1))
                printf(",");  // separate substrings with commas
        }
    }

    printf("\n");
    return 0;
}
