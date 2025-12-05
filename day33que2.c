//Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main() {
    int n, i, key, pos = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n + 1]; // +1 to accommodate the new element
    printf("Enter %d sorted elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &key);

    // Find position to insert
    for(i = 0; i < n; i++) {
        if(arr[i] > key) {
            pos = i;
            break;
        }
        pos = n; // If key is greater than all elements
    }

    // Shift elements to the right
    for(i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert key
    arr[pos] = key;
    n++;

    // Print new array
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
