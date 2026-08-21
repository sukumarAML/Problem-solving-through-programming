#include <stdio.h>

int main()
{
    double a, b, quotient;

    printf("Division of two double numbers\n");

    printf("Enter the first number: ");
    scanf("%lf", &a);

    printf("Enter the second number: ");
    scanf("%lf", &b);

    quotient = a / b;

    printf("The quotient of %.4lf / %.4lf is %.4lf",
           a, b, quotient);

    return 0;
}