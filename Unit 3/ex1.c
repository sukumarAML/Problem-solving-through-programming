#include <stdio.h>

int main() {
    int rows, cols, i, j;

    // Ask user for the dimensions of the matrix
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    // Input elements into the matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the matrix
    printf("\nThe entered matrix is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            // Using \t (tab space) keeps the formatting aligned properly
            printf("%d\t", matrix[i][j]); 
        }
        // Move to the next line after printing all elements of a row
        printf("\n"); 
    }

    return 0;
}