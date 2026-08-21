#include <stdio.h>

int main()
{
    int a, b, quotient;

    printf("Division of two integers\n");

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    quotient = a / b;

    printf("The quotient of %d / %d is %d", a, b, quotient);

    return 0;
}