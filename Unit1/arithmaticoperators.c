#include <stdio.h>

int main() {
    // Initializing two integer variables
    int num1 = 20;
    int num2 = 6;
    
    // Variables to store results
    int sum, difference, product, remainder;
    double quotient; // Using double for division to keep the decimal values

    printf("--- Arithmetic Operators Demo ---\n");
    printf("Inputs: num1 = %d, num2 = %d\n\n", num1, num2);

    // 1. Addition (+)
    sum = num1 + num2;
    printf("Addition:       %d + %d = %d\n", num1, num2, sum);

    // 2. Subtraction (-)
    difference = num1 - num2;
    printf("Subtraction:    %d - %d = %d\n", num1, num2, difference);

    // 3. Multiplication (*)
    product = num1 * num2;
    printf("Multiplication: %d * %d = %d\n", num1, num2, product);

    // 4. Division (/)
    // Note: Typecasting (double) is used to avoid integer division (which drops fractions)
    quotient = (double)num1 / num2;
    printf("Division:       %d / %d = %.2f\n", num1, num2, quotient);

    // 5. Modulus (%)
    // Returns the remainder left over after integer division
    remainder = num1 % num2;
    printf("Modulus:        %d %% %d = %d (Remainder)\n", num1, num2, remainder);

    return 0;
}
