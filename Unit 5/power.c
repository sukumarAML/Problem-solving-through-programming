#include <stdio.h>

// (a) Simple Recursion
double powerRecursive(double a, int n) {
    if (n == 0) {
        return 1.0; // Base case: any number to the power 0 is 1
    }
    if (n < 0) {
        return 1.0 / powerRecursive(a, -n); // Handle negative exponents
    }
    return a * powerRecursive(a, n - 1);
}

// (b) Iteration
double powerIterative(double a, int n) {
    double result = 1.0;
    int exp = n;

    if (exp < 0) {
        exp = -exp; // Work with positive count first
    }

    for (int i = 0; i < exp; i++) {
        result *= a;
    }

    if (n < 0) {
        return 1.0 / result;
    }
    return result;
}

int main() {
    double base;
    int exponent;

    printf("Enter base (a): ");
    scanf("%lf", &base);

    printf("Enter exponent (n): ");
    scanf("%d", &exponent);

    if (base == 0 && exponent < 0) {
        printf("Error: 0 cannot be raised to a negative power.\n");
        return 1;
    }

    printf("\n--- Results ---\n");
    printf("(a) Simple Recursion: %.4lf\n", powerRecursive(base, exponent));
    printf("(b) Iteration:        %.4lf\n", powerIterative(base, exponent));

    return 0;
}
