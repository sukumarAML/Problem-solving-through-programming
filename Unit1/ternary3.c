#include <stdio.h>

int main()
{
    int a, b, c, max;

    printf("Enter three values: ");
    scanf("%d %d %d", &a, &b, &c);

    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("Maximum value = %d\n", max);

    return 0;
}