#include <stdio.h>

int main() {
    int rows, i, j;

    // Ask user for the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Outer loop starts from the maximum rows and goes down to 1
    for (i = rows; i >= 1; i--) {
        // Inner loop prints stars based on the current row number
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        // Move to the next line after finishing a row
        printf("\n");
    }

    return 0;
}