#include <stdio.h>

int main()
{
    float a, b, difference;

    printf("Subtraction of two float numbers\n");

    printf("Enter the first number: ");
    scanf("%f", &a);

    printf("Enter the second number: ");
    scanf("%f", &b);

    difference = a - b;

    printf("The difference of %.2f and %.2f is %.2f", a, b, difference);

    return 0;
}
