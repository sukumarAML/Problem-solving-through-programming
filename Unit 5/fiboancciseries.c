#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    // 1. Ask the user how many terms to generate
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    // 2. Loop 'n' times to print each term
    for (int i = 1; i <= n; i++) {
        printf("%d ", first);

        // Calculate the next term and shift values forward
        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");
    return 0;
}


// Step-by-Step Logic

// Initial Values: first starts at 0, and second starts at 1.
// Print Current Term: Each iteration prints first, so 0 and 1 are automatically printed in the first two passes.
// Shift Forward: next adds first + second. Then first takes the value of second, and second takes the value of next for the next loop cycle.
