#include <stdio.h>

// Function definition uses pointers (*) to accept memory addresses
void swap(int *a, int *b) {
    int temp = *a; // Get the value pointed to by 'a'
    *a = *b;       // Assign the value pointed to by 'b' to the address 'a'
    *b = temp;     // Assign temp to the address 'b'
}

int main() {
    int x = 10;
    int y = 20;

    printf("Before swap: x = %d, y = %d\n", x, y);

    // Function call uses the address-of operator (&) to pass references
    swap(&x, &y);

    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}
