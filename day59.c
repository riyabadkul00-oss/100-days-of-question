//Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

#include <stdio.h>

int main() {
    int arr[1000], n, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    if (k <= 0 || k > n) {
        printf("-1\n");              // invalid k
        return 0;
    }

    long long currSum = 0, maxSum;

    // sum of first window
    for (int i = 0; i < k; i++) currSum += arr[i];
    maxSum = currSum;

    // slide the window
    for (int i = k; i < n; i++) {
        currSum += arr[i] - arr[i - k];
        if (currSum > maxSum) maxSum = currSum;
    }

    printf("%lld\n", maxSum);
    return 0;
}
