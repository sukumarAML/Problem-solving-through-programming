#include <stdio.h>

int main() {
    int rows = 5;

    // 1. Open a text file in write ("w") mode
    FILE *file = fopen("pattern.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // 2. Use nested loops to build the pattern
    for (int i = 1; i <= rows; i++) {
        
        // Print leading spaces into the file
        for (int space = 1; space <= rows - i; space++) {
            fprintf(file, " ");
        }

        // Print stars into the file
        for (int star = 1; star <= (2 * i - 1); star++) {
            fprintf(file, "*");
        }

        // Move to the next line in the file
        fprintf(file, "\n");
    }

    // 3. Always close the file to save changes
    fclose(file);
    printf("Pattern printed to pattern.txt successfully.\n");

    return 0;
}
