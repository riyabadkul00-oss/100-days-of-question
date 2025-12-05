//Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int nums[1000], n = 0, target;
    char input[1000];

    // Read array input
    if (!fgets(input, sizeof(input), stdin)) return 0;

    // Parse input format like: nums = [2,7,11,15]
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

    // Read target line
    if (!fgets(input, sizeof(input), stdin)) return 0;
    // Parse format: target = 9
    char *eq = strchr(input, '=');
    if (eq) {
        target = atoi(eq + 1);
    } else {
        target = atoi(input);
    }

    // Find two numbers that sum to target
    int found = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                found = 1;
                break;
            }
        }
        if (found) break;
    }

    if (!found)
        printf("-1 -1\n");

    return 0;
}
