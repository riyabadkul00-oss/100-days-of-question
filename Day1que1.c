// Que1.  write a program to input two numbers and display their sum.
#include <stdio.h>
int main()
{
   int a, b, sum;
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);
    sum = a+b;
    printf(" the sum of %d and %d is %d\n", a, b, sum);
    return 0;
}