//Insert an element in an array at a given position.

#include <stdio.h>

int main() {
    int n, i, pos, val;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n + 1]; // +1 for the new element
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position and element to insert: ");
    scanf("%d %d", &pos, &val);

    // Shift elements to the right from the given position
    for(i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the element
    arr[pos] = val;
    n++;

    // Print updated array
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
