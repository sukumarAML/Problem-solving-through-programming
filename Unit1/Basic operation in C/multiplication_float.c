#include <stdio.h>

int main()
{
    float a, b, product;

    printf("Multiplication of two float numbers\n");

    printf("Enter the first number: ");
    scanf("%f", &a);

    printf("Enter the second number: ");
    scanf("%f", &b);

    product = a * b;

    printf("The product of %.2f and %.2f is %.2f", a, b, product);

    return 0;
}