#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        // Print stars and inner spaces
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1) || i == rows) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}


// How the Logic Works

// Outer Loop (i): Controls the total number of rows from 1 up to rows.
// First Column (j == 1): Always prints a star to form the left edge of the triangle.
// Last Column (j == i or j == 2 * i - 1): Prints a star at the end of each row to form the right edge.
// Bottom Base (i == rows): Fills the entire final row with stars to close the triangle.
// Inner Spaces (else): Prints blank spaces whenever a position is not on one of the three outer edges.