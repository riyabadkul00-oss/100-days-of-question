//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int nums[1000];
    int n = 0;
    char input[1000];

    // Read array input line
    if (!fgets(input, sizeof(input), stdin)) return 0;

    // Parse format like: nums1 = [1,3,3,4]
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

    // There are n numbers, but only (n-1) unique expected values (0 to n-2 or 1 to n-1)
    // Use sum method: difference between actual sum and expected sum gives duplicate

    int actualSum = 0;
    for (int i = 0; i < n; i++)
        actualSum += nums[i];

    // Expected sum if there were no duplicates
    // Since the array is from 0..(n-2) (one missing number + one duplicate)
    int expectedSum = (n - 1) * (n - 2) / 2;

    int duplicate = actualSum - expectedSum;

    printf("%d\n", duplicate);

    return 0;
}
