#include <stdio.h>

int main() {
    FILE *fp;
    char line[100];

    // Open "example.txt" in read mode
    fp = fopen("example.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open 'example.txt'. Make sure the file exists.\n");
        return 1;
    }

    printf("--- Contents of example.txt ---\n");
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }
    printf("\n--- End of File ---\n");

    // Close the file
    fclose(fp);

    return 0;
}
