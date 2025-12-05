//Perform diagonal traversal of a matrix.

#include <stdio.h>

int main() {
    int rows, cols, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Diagonal traversal
    // Traverse all diagonals starting from first row
    for(int k = 0; k < cols; k++) {
        i = 0;
        j = k;
        while(i < rows && j >= 0) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
    }

    // Traverse remaining diagonals starting from last column
    for(int k = 1; k < rows; k++) {
        i = k;
        j = cols - 1;
        while(i < rows && j >= 0) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
    }

    return 0;
}
