//Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>
int main()
 {
    int a, b;
    int sum, difference, product;
    float quotient;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    sum = a + b;
    difference = a - b;
    product = a * b;
    quotient = (float)a / b; 
    printf("\nSum = %d", sum);
    printf("\nDifference = %d", difference);
    printf("\nProduct = %d", product);
    printf("\nQuotient = %.2f", quotient);
    return 0;
}