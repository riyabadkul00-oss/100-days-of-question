//Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

#include <stdio.h>

int main() {
    int n, x = -1;
    int totalSum = 0, leftSum = 0;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Calculate total sum from 1 to n
    totalSum = n * (n + 1) / 2;

    // Check for each x from 1 to n
    for (int i = 1; i <= n; i++) {
        leftSum += i;
        int rightSum = totalSum - leftSum + i; // sum from i to n

        if (leftSum == rightSum) {
            x = i;
            break; // found pivot integer
        }
    }

    printf("%d\n", x);
    return 0;
}
