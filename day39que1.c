//Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>

int main() {
    int rows, cols, i, j, k, isDistinct = 1;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if diagonal elements are distinct
    for(i = 0; i < rows && i < cols; i++) {
        for(k = i + 1; k < rows && k < cols; k++) {
            if(matrix[i][i] == matrix[k][k]) {
                isDistinct = 0;
                break;
            }
        }
        if(!isDistinct)
            break;
    }

    if(isDistinct)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
