//Delete an element from an array.

#include <stdio.h>

int main() {
    int n, i, pos;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    // Shift elements to the left from the given position
    for(i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--; // reduce array size

    // Print updated array
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
