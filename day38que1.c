//Add two matrices.

#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    int a[r1][c1];
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    int b[r2][c2];
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < r2; i++) {
        for(j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Check if addition is possible
    if(r1 != r2 || c1 != c2) {
        printf("Matrix addition not possible.\n");
        return 0;
    }

    int sum[r1][c1];

    // Add the two matrices
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Print the sum matrix
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
