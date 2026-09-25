#include <stdio.h>

int main() {
    // Declaring a 2D array with 2 rows and 3 columns
    int matrix[2][3] = {
        {1, 2, 3},  // Row 0
        {4, 5, 6}   // Row 1
    };

    printf("Displaying 2D Array Matrix:\n");
    // Nested loops are required to print a 2D array
    for (int i = 0; i < 2; i++) {       // Outer loop for rows
        for (int j = 0; j < 3; j++) {   // Inner loop for columns
            printf("%d ", matrix[i][j]);
        }
        printf("\n"); // Newline after each row
    }

    return 0;
}
