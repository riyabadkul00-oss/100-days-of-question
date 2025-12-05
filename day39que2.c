//Find the sum of main diagonal elements for a square matrix.

#include <stdio.h>

int main() {
    int n, i, j, sum = 0;

    printf("Enter size of square matrix (rows and columns): ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate sum of main diagonal elements
    for(i = 0; i < n; i++) {
        sum += matrix[i][i];
    }

    printf("%d\n", sum);

    return 0;
}
