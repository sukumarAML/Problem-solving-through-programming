#include <stdio.h>

int main() {
    FILE *fp;

    // Create a new file named "example.txt" in write mode
    fp = fopen("example.txt", "w");

    // Verify if the file was created successfully
    if (fp == NULL) {
        printf("Error: Could not create the file.\n");
        return 1;
    }

    printf("File 'example.txt' created successfully!\n");

    // Close the file to save it properly
    fclose(fp);

    return 0;
}
