#include <stdio.h>

int main() {
    int n, key, found = -1;

    // Input array size
    scanf("%d", &n);
    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Input element to search
    scanf("%d", &key);

    // Linear search
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = i;
            break;
        }
    }

    // Output result
    if (found != -1)
        printf("Found at index %d", found);
    else
        printf("-1");

    return 0;
}