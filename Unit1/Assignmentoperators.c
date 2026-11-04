#include <stdio.h>

int main() {
    // 1. Simple Assignment Operator (=)
    // Assigns the value on the right to the variable on the left
    int x = 10; 
    int y = 4;

    printf("--- Assignment Operators Demo ---\n");
    printf("Initial values: x = %d, y = %d\n\n", x, y);

    // 2. Addition Assignment (+=)
    // x += y is exactly equivalent to x = x + y
    x += y; 
    printf("After x += y  -> x becomes: %d\n", x); // 10 + 4 = 14

    // 3. Subtraction Assignment (-=)
    // x -= y is exactly equivalent to x = x - y
    x -= y; 
    printf("After x -= y  -> x becomes: %d\n", x); // 14 - 4 = 10

    // 4. Multiplication Assignment (*=)
    // x *= y is exactly equivalent to x = x * y
    x *= y; 
    printf("After x *= y  -> x becomes: %d\n", x); // 10 * 4 = 40

    // 5. Division Assignment (/=)
    // x /= y is exactly equivalent to x = x / y
    x /= y; 
    printf("After x /= y  -> x becomes: %d\n", x); // 40 / 4 = 10

    // 6. Modulus Assignment (%=)
    // x %%= y is exactly equivalent to x = x %% y
    x %= y; 
    printf("After x %%= y  -> x becomes: %d\n", x); // 10 % 4 = 2 (Remainder)

    return 0;
}
/*
• Efficiency & Readability: Compound operators like x += 5 are preferred by programmers because they are more concise than writing x = x + 5. They also prevent you from typing long variable names twice.
• Right-to-Left Associativity: Assignment operators evaluate from right to left. This allows you to chain assignments together, like a = b = c = 5;, which sets all three variables to 5 starting with c.
• Bitwise Companions: It is worth noting that bitwise operators can also be written in compound assignment format if you ever need them (e.g., &=, |=, ^=, <<=, >>=).
*/