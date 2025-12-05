//Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int nums[1000];
    int n = 0;
    char input[1000];

    // Read input line
    if (!fgets(input, sizeof(input), stdin)) return 0;

    // Parse numbers inside brackets
    char *start = strchr(input, '[');
    char *end = strchr(input, ']');
    if (start && end && end > start) {
        *end = '\0';
        start++;
        char *token = strtok(start, ", ");
        while (token != NULL) {
            nums[n++] = atoi(token);
            token = strtok(NULL, ", ");
        }
    }

    // The array has n elements, but should contain numbers from 0 to n
    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;

    for (int i = 0; i < n; i++) {
        actualSum += nums[i];
    }

    int missing = expectedSum - actualSum;

    printf("%d\n", missing);

    return 0;
}
