#include <stdio.h>

int main()
{
    double a, b, product;

    printf("Multiplication of two double numbers\n");

    printf("Enter the first number: ");
    scanf("%lf", &a);

    printf("Enter the second number: ");
    scanf("%lf", &b);

    product = a * b;

    printf("The product of %.4lf and %.4lf is %.4lf",
           a, b, product);

    return 0;
}