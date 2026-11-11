#include <stdio.h>

int main() {
    FILE *fp;
    char message[100];

    // Open "example.txt" in write mode
    fp = fopen("example.txt", "w");
    if (fp == NULL) {
        printf("Error: Could not open example.txt.\n");
        return 1;
    }

    // Take a full line of input from the user
    printf("Enter the text you want to store in example.txt: ");
    fgets(message, sizeof(message), stdin);

    // Write the text into example.txt
    fprintf(fp, "%s", message);

    // Save and close the file
    fclose(fp);

    printf("Data stored in 'example.txt' successfully!\n");

    return 0;
}
