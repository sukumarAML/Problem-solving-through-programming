#include <stdio.h>

int main() {
    FILE *fp;
    int id, marks;
    char name[50]; // Declared as a character array to hold a string

    // 1. WRITE DATA TO A FILE
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    fprintf(fp, "101 Ananya 88\n");
    fprintf(fp, "102 Karthik 92\n");
    fprintf(fp, "103 Priya 79\n");

    fclose(fp);
    printf("Data saved to students.txt successfully.\n\n");

    // 2. READ DATA BACK FROM THE FILE
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("--- Reading Saved Records ---\n");
    // %49s prevents buffer overflow by leaving room for the null terminator
    while (fscanf(fp, "%d %49s %d", &id, name, &marks) == 3) {
        printf("ID: %d | Name: %-10s | Marks: %d\n", id, name, marks);
    }

    fclose(fp);

    return 0;
}
