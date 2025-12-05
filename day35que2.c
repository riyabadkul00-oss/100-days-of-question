//Rotate an array to the right by k positions.

#include <stdio.h>

int main() {
    int n, k, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k (number of rotations): ");
    scanf("%d", &k);

    k = k % n; // handle cases where k > n

    int temp[k];

    // Store last k elements
    for(i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Shift remaining elements to the right
    for(i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    // Copy stored elements to the front
    for(i = 0; i < k; i++) {
        arr[i] = temp[i];
    }

    // Print rotated array
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
