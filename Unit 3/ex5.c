#include <stdio.h>

int main() {
    int rows, i, j;

    // Ask user for the height of the triangle
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Outer loop runs from the maximum number of rows down to 1
    for (i = rows; i >= 1; i--) {
        
        // 1. Inner loop to print leading spaces
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // 2. Inner loop to print the stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        // Move to the next line after completing a row
        printf("\n");
    }

    return 0;
}