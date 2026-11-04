#include <stdio.h>

int main() {
    // Input values for demonstration
    // a = 5  (Binary: 00000101)
    // b = 3  (Binary: 00000011)
    unsigned int a = 5;
    unsigned int b = 3;
    int result;

    printf("Initial values:\n");
    printf("a = %u (Binary: 00000101)\n", a);
    printf("b = %u (Binary: 00000011)\n\n", b);
    printf("--- Bitwise Operations ---\n");

    // 1. Bitwise AND (&): Sets bit to 1 if both bits are 1
    result = a & b; 
    printf("a & b  = %d  (Expected: 1, Binary: 00000001)\n", result);

    // 2. Bitwise OR (|): Sets bit to 1 if at least one bit is 1
    result = a | b; 
    printf("a | b  = %d  (Expected: 7, Binary: 00000111)\n", result);

    // 3. Bitwise XOR (^): Sets bit to 1 if bits are different
    result = a ^ b; 
    printf("a ^ b  = %d  (Expected: 6, Binary: 00000110)\n", result);

    // 4. Bitwise NOT (~): Inverts all the bits (0 becomes 1, 1 becomes 0)
    // Note: ~a for an unsigned int will invert all 32 bits (or 16 depending on compiler)
    printf("~a     = %u (Expected: 4294967290 on 32-bit systems)\n", ~a);

    // 5. Left Shift (<<): Shifts bits to the left (multiplies by 2^n)
    result = a << 1; 
    printf("a << 1 = %d  (Expected: 10, Binary: 00001010)\n", result);

    // 6. Right Shift (>>): Shifts bits to the right (divides by 2^n)
    result = a >> 1; 
    printf("a >> 1 = %d  (Expected: 2, Binary: 00000010)\n", result);

    return 0;
}
