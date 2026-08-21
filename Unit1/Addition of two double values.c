#include <stdio.h>

int main()
{
    double a, b, sum;

    printf("Enter two double values: ");
    scanf("%lf %lf", &a, &b);

    sum = a + b;

    printf("Sum = %.2lf\n", sum);

    return 0;
}
