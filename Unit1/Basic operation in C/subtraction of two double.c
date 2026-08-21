#include <stdio.h>

int main()
{
    double a, b, difference;

    printf("Subtraction of two double numbers\n");

    printf("Enter the first number: ");
    scanf("%lf", &a);

    printf("Enter the second number: ");
    scanf("%lf", &b);

    difference = a - b;

    printf("The difference of %.4lf and %.4lf is %.4lf",
           a, b, difference);

    return 0;
}
