// Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>

int main() {
    int length, breadth, area, perimeter;
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    printf("\nArea of rectangle = %d", area);
    printf("\nPerimeter of rectangle = %d", perimeter);
    return 0;
}