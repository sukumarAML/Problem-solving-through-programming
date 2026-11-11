#include <stdio.h>

// Recursive function to compute factorial
unsigned long long factorialRecursive(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case
    }
    return n * factorialRecursive(n - 1);
}

// Iterative function to compute factorial
unsigned long long factorialIterative(int n) {
    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    printf("\n--- Results ---\n");
    printf("Recursive Factorial of %d: %llu\n", num, factorialRecursive(num));
    printf("Iterative Factorial of %d: %llu\n", num, factorialIterative(num));

    return 0;
}
