#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main() {
    FILE *file;
    char filename[100];
    char line[1024]; // Buffer to hold each line

    long charCount = 0;
    long wordCount = 0;
    long lineCount = 0;

    // Prompt the user for the file path
    printf("Enter the filename: ");
    scanf("%99s", filename);

    // Open the file in read mode
    file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Read the file line-by-line
    while (fgets(line, sizeof(line), file) != NULL) {
        lineCount++;
        bool inWord = false;

        for (int i = 0; line[i] != '\0'; i++) {
            charCount++;

            // Check if the current character is whitespace
            if (isspace((unsigned char)line[i])) {
                inWord = false;
            } else if (!inWord) {
                // Transitioning from whitespace to a non-whitespace character marks a new word
                inWord = true;
                wordCount++;
            }
        }
    }

    // Close the file
    fclose(file);

    // Display the results
    printf("\n--- File Statistics ---\n");
    printf("Lines      : %ld\n", lineCount);
    printf("Words      : %ld\n", wordCount);
    printf("Characters : %ld\n", charCount);

    return 0;
}
