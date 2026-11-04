#include <stdio.h>

int main() {
    // Initializing two values to compare
    int a = 15;
    int b = 20;

    printf("--- Relational Operators Demo ---\n");
    printf("Comparing: a = %d, b = %d\n\n", a, b);
    printf("Output: 1 means TRUE, 0 means FALSE\n");
    printf("------------------------------------\n");

    // 1. Equal to (==)
    printf("Is a equal to b?             (a == b)  -> %d\n", a == b);

    // 2. Not equal to (!=)
    printf("Is a NOT equal to b?         (a != b)  -> %d\n", a != b);

    // 3. Greater than (>)
    printf("Is a greater than b?         (a > b)   -> %d\n", a > b);

    // 4. Less than (<)
    printf("Is a less than b?            (a < b)   -> %d\n", a < b);

    // 5. Greater than or equal to (>=)
    printf("Is a greater than or equal?  (a >= b)  -> %d\n", a >= b);

    // 6. Less than or equal to (<=)
    printf("Is a less than or equal?     (a <= b)  -> %d\n", a <= b);

    printf("\n--- Practical Example using if-else ---\n");
    if (a < b) {
        printf("Condition met: %d is strictly less than %d\n", a, b);
    } else {
        printf("Condition failed: %d is not less than %d\n", a, b);
    }

    return 0;
}
