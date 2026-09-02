#include <stdio.h>

int main()
{
    float fahrenheit, centigrade;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    centigrade = (fahrenheit - 32) * 5.0 / 9.0; //c=(F-32)*5/9

    printf("Temperature in Centigrade = %.2f\n", centigrade);

    return 0;
}