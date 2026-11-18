#include <stdio.h>

// 1. Define the Student structure
struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    // 2. Create and initialize aa structure array variable
    struct Student s[7] = {
        {101, "Rajesh", 49.5},
        {102, "suresh", 83.5},
        {103, "ananth", 78.5},
        {104, "charan", 65.0},
        {105, "guptha", 55.0},
        {106, "Kumar", 95.0},
        {107, "Rahul", 80.0}
    };

    for(int i=0;i<7;i++)
    {
    // 3. Print to console
    printf("--- Student Details ---\n");
    printf("Roll No : %d\n", s[i].rollNo);
    printf("Name    : %s\n", s[i].name);
    printf("Marks   : %.2f\n", s[i].marks);
    }

    // 4. Open a text file in write ("w") mode
    FILE *file = fopen("student.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    for(int i=0;i<7;i++)
    {
    // 5. Write the exact same details into the text file
    fprintf(file, "--- Student Details ---\n");
    fprintf(file, "Roll No : %d\n", s[i].rollNo);
    fprintf(file, "Name    : %s\n", s[i].name);
    fprintf(file, "Marks   : %.2f\n", s[i].marks);
    }
    // 6. Close the file to save changes
    fclose(file);
    printf("\nDetails saved to student.txt successfully!\n");

    return 0;
}
