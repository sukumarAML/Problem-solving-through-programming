#include <stdio.h>

int main()
{
    int a, b, difference;

    printf("Subtraction of two integers\n");

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    difference = a - b;

    printf("The difference of %d and %d is %d", a, b, difference);

    return 0;
}
