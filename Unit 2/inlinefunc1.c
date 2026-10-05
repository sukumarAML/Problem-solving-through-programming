#include <stdio.h>

// Inline function definition
static inline int square(int x) {
    return x * x;
}

int main() {
    int num = 5;
    
    // The compiler can replace this call with: int result = 5 * 5;
    int result = square(num); 
    
    printf("The square of %d is %d\n", num, result);
    return 0;
}
