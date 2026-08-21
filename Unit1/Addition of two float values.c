#include <stdio.h>

int main()
{
    float a, b, sum;

    printf("Enter two float values: ");
    scanf("%f %f", &a, &b);

    sum = a + b;

    printf("Sum = %.2f\n", sum);

    return 0;
}
