#include <stdio.h>

int main() {
    int n, i, j;

    // Ask user for the number of rows for the upper half (half-height of the diamond)
    printf("Enter the number of rows (half-height): ");
    scanf("%d", &n);

    // 1. Upper half (Upright Pyramid)
    for (i = 1; i <= n; i++) {
        // Print leading spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    // 2. Lower half (Inverted Pyramid)
    for (i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}