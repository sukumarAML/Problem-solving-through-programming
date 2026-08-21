#include <stdio.h>

int main()
{
    float a, b, quotient;

    printf("Division of two float numbers\n");

    printf("Enter the first number: ");
    scanf("%f", &a);

    printf("Enter the second number: ");
    scanf("%f", &b);

    quotient = a / b;

    printf("The quotient of %.2f / %.2f is %.2f",
           a, b, quotient);

    return 0;
}