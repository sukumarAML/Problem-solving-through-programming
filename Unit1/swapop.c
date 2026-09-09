#include <stdio.h>

int main() {
    int a = 6;
    int b = 12;

    printf("Before swap: a = %d, b = %d\n", a, b);

    // The 3-step XOR swap trick
    a = a ^ b; 
    b = a ^ b; 
    a = a ^ b; 

    printf("After swap:  a = %d, b = %d\n", a, b);

    return 0;
}
