//Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

#include <stdio.h>

int main() {
    int arr[1000], n;
    int maxSum, currentSum;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize with the first element
    maxSum = currentSum = arr[0];

    // Kadane's Algorithm
    for (int i = 1; i < n; i++) {
        // Either add to current subarray or start a new one
        if (currentSum + arr[i] > arr[i])
            currentSum = currentSum + arr[i];
        else
            currentSum = arr[i];

        // Update maxSum if needed
        if (currentSum > maxSum)
            maxSum = currentSum;
    }

    printf("%d\n", maxSum);
    return 0;
}
