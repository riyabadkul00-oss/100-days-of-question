//Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int nums1[1000], nums2[1000];
    int m = 0, n = 0;
    char input[1000];

    // Read first array
    if (!fgets(input, sizeof(input), stdin)) return 0;
    char *start = strchr(input, '[');
    char *end = strchr(input, ']');
    if (start && end && end > start) {
        *end = '\0';
        start++;
        char *token = strtok(start, ", ");
        while (token != NULL) {
            nums1[m++] = atoi(token);
            token = strtok(NULL, ", ");
        }
    }

    // Read second array
    if (!fgets(input, sizeof(input), stdin)) return 0;
    start = strchr(input, '[');
    end = strchr(input, ']');
    if (start && end && end > start) {
        *end = '\0';
        start++;
        char *token = strtok(start, ", ");
        while (token != NULL) {
            nums2[n++] = atoi(token);
            token = strtok(NULL, ", ");
        }
    }

    // Merge two sorted arrays
    int merged[2000];
    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (nums1[i] <= nums2[j])
            merged[k++] = nums1[i++];
        else
            merged[k++] = nums2[j++];
    }

    while (i < m)
        merged[k++] = nums1[i++];

    while (j < n)
        merged[k++] = nums2[j++];

    // Print merged array
    for (int x = 0; x < k; x++) {
        printf("%d", merged[x]);
        if (x != k - 1) printf(" ");
    }
    printf("\n");

    return 0;
}
