#include <stdio.h>

int main() {
    int a = 10;
    int b;

    printf("--- Increment and Decrement Operators Demo ---\n");
    printf("Initial value of a = %d\n\n", a);

    // ==========================================
    // 1. INCREMENT OPERATORS (++)
    // ==========================================
    printf("--- 1. Increment Examples ---\n");

    // Postfix Increment (a++): Assigns the old value to 'b' first, then increments 'a'
    b = a++; 
    printf("Postfix (b = a++): b = %d, a updated to = %d\n", b, a); // b gets 10, a becomes 11

    // Resetting 'a' to 10
    a = 10;

    // Prefix Increment (++a): Increments 'a' first, then assigns the new value to 'b'
    b = ++a; 
    printf("Prefix  (b = ++a): b = %d, a updated to = %d\n\n", b, a); // a becomes 11, b gets 11


    // ==========================================
    // 2. DECREMENT OPERATORS (--)
    // ==========================================
    printf("--- 2. Decrement Examples ---\n");

    // Resetting 'a' to 10
    a = 10;

    // Postfix Decrement (a--): Assigns the old value to 'b' first, then decrements 'a'
    b = a--; 
    printf("Postfix (b = a--): b = %d, a updated to = %d\n", b, a); // b gets 10, a becomes 9

    // Resetting 'a' to 10
    a = 10;

    // Prefix Decrement (--a): Decrements 'a' first, then assigns the new value to 'b'
    b = --a; 
    printf("Prefix  (b = --a): b = %d, a updated to = %d\n", b, a); // a becomes 9, b gets 9

    return 0;
}
