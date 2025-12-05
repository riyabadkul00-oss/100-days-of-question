//Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main() {
    long long num;
    int count[10] = {0}, digit, max = 0, mostFrequent = 0;

    printf("Enter a number: ");
    scanf("%lld", &num);

    // Count frequency of each digit
    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    // Find the digit with maximum frequency
    for (int i = 0; i < 10; i++) {
        if (count[i] > max) {
            max = count[i];
            mostFrequent = i;
        }
    }

    printf("%d\n", mostFrequent);
    return 0;
}
