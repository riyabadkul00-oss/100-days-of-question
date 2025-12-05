//Check if a matrix is symmetric.

#include <stdio.h>

int main() {
    int n, i, j, isSymmetric = 1;

    printf("Enter size of square matrix (rows and columns): ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check symmetry: matrix[i][j] == matrix[j][i]
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if(!isSymmetric)
            break;
    }

    if(isSymmetric)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
